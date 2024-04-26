/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:08:25
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, A9, A10, A11, A12, A13, A14, };

int inferenceTPG() {
	enum vertices currentVertex = T8;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A13, A12,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A9, A11,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A13, A9, T0,  };

			double T2Scores[3];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A14, A13, A12, A13, T0,  };

			double T3Scores[5];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();
			T3Scores[4] = P11();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { T2, A9, A12, A12, A10,  };

			double T4Scores[5];

			T4Scores[0] = P12();
			T4Scores[1] = P13();
			T4Scores[2] = P14();
			T4Scores[3] = P15();
			T4Scores[4] = P16();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T3, T4, T2, T3,  };

			double T5Scores[4];

			T5Scores[0] = P17();
			T5Scores[1] = P18();
			T5Scores[2] = P12();
			T5Scores[3] = P19();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T5, A12, A10,  };

			double T6Scores[3];

			T6Scores[0] = P20();
			T6Scores[1] = P9();
			T6Scores[2] = P21();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T5, A12,  };

			double T7Scores[2];

			T7Scores[0] = P22();
			T7Scores[1] = P9();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { T1, T3, A10, T6, T7,  };

			double T8Scores[5];

			T8Scores[0] = P23();
			T8Scores[1] = P24();
			T8Scores[2] = P25();
			T8Scores[3] = P26();
			T8Scores[4] = P27();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A9: {
			return 0;
			break;
		}
		case A10: {
			return 1;
			break;
		}
		case A11: {
			return 2;
			break;
		}
		case A12: {
			return 5;
			break;
		}
		case A13: {
			return 7;
			break;
		}
		case A14: {
			return 4;
			break;
		}
		}
	}
}
