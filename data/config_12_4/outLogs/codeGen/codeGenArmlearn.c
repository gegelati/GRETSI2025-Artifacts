/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:06:57
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, A7, A8, A9, A10, A11, };

int inferenceTPG() {
	enum vertices currentVertex = T6;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A11, A10, A9, A9,  };

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
			const enum vertices next[5] = { A8, A11, A9, A11, A9,  };

			double T1Scores[5];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P6();
			T1Scores[3] = P7();
			T1Scores[4] = P8();

			int best = bestProgram(T1Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A11, A9, A7, A8,  };

			double T2Scores[4];

			T2Scores[0] = P9();
			T2Scores[1] = P10();
			T2Scores[2] = P11();
			T2Scores[3] = P4();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A7, A10, A11, A10,  };

			double T3Scores[4];

			T3Scores[0] = P12();
			T3Scores[1] = P13();
			T3Scores[2] = P14();
			T3Scores[3] = P15();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { T1, T2, A7, A11,  };

			double T4Scores[4];

			T4Scores[0] = P16();
			T4Scores[1] = P17();
			T4Scores[2] = P12();
			T4Scores[3] = P18();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T4, A7,  };

			double T5Scores[2];

			T5Scores[0] = P19();
			T5Scores[1] = P20();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { T0, T3, T5, A11,  };

			double T6Scores[4];

			T6Scores[0] = P21();
			T6Scores[1] = P22();
			T6Scores[2] = P23();
			T6Scores[3] = P24();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A7: {
			return 1;
			break;
		}
		case A8: {
			return 4;
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
		case A11: {
			return 5;
			break;
		}
		}
	}
}
