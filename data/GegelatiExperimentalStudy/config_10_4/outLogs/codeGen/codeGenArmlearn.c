/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:05:48
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

enum vertices {T0, T1, T2, T3, T4, A5, A6, A7, A8, A9, A10, };

int inferenceTPG() {
	enum vertices currentVertex = T4;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A10, A8, A6, A8,  };

			double T0Scores[4];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();

			int best = bestProgram(T0Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { A9, A10, A5, A10,  };

			double T1Scores[4];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P6();
			T1Scores[3] = P7();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A5, A8, A6,  };

			double T2Scores[3];

			T2Scores[0] = P8();
			T2Scores[1] = P9();
			T2Scores[2] = P2();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T0, T1,  };

			double T3Scores[2];

			T3Scores[0] = P10();
			T3Scores[1] = P11();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[7] = { A7, T3, A9, T0, A6, T0, T2,  };

			double T4Scores[7];

			T4Scores[0] = P12();
			T4Scores[1] = P13();
			T4Scores[2] = P14();
			T4Scores[3] = P15();
			T4Scores[4] = P16();
			T4Scores[5] = P17();
			T4Scores[6] = P18();

			int best = bestProgram(T4Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A5: {
			return 0;
			break;
		}
		case A6: {
			return 1;
			break;
		}
		case A7: {
			return 2;
			break;
		}
		case A8: {
			return 4;
			break;
		}
		case A9: {
			return 5;
			break;
		}
		case A10: {
			return 7;
			break;
		}
		}
	}
}
