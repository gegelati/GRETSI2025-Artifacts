/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:02:08
 * With the CodeGen::TPGGenerationEngine.
 */

#include "codeGenArmlearn.h"
#include "codeGenArmlearn_program.h"
#include <limits.h>
#include <assert.h>
#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int bestProgram(double *results, int nb) {
	int bestProgram = 0;
	double bestScore = (isnan(results[0]))? -INFINITY : results[0];
	for (int i = 1; i < nb; i++) {
		double challengerScore = (isnan(results[i]))? -INFINITY : results[i];
		if (challengerScore >= bestScore) {
			bestProgram = i;
			bestScore = challengerScore;
		}
	}
	return bestProgram;
}

enum vertices {T0, T1, T2, T3, T4, T5, A6, A7, A8, A9, A10, };

int inferenceTPG() {
	enum vertices currentVertex = T5;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A8, A9,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { T0, A8, A10,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A9, A8,  };

			double T2Scores[2];

			T2Scores[0] = P5();
			T2Scores[1] = P6();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A7, T2, T0, T1, A8,  };

			double T3Scores[5];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();
			T3Scores[4] = P6();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { A10, A9, A7, A6, A8,  };

			double T4Scores[5];

			T4Scores[0] = P11();
			T4Scores[1] = P12();
			T4Scores[2] = P13();
			T4Scores[3] = P14();
			T4Scores[4] = P15();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T4, T2, T2, T3,  };

			double T5Scores[4];

			T5Scores[0] = P16();
			T5Scores[1] = P17();
			T5Scores[2] = P18();
			T5Scores[3] = P19();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A6: {
			return 4;
			break;
		}
		case A7: {
			return 1;
			break;
		}
		case A8: {
			return 2;
			break;
		}
		case A9: {
			return 7;
			break;
		}
		case A10: {
			return 0;
			break;
		}
		}
	}
}
