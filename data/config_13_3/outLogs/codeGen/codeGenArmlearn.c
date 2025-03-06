/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:07:25
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
			const enum vertices next[2] = { A12, A11,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A10, A14, A12,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { T0, A10, A12, A14,  };

			double T2Scores[4];

			T2Scores[0] = P5();
			T2Scores[1] = P6();
			T2Scores[2] = P0();
			T2Scores[3] = P3();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { T1, T1, A14,  };

			double T3Scores[3];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A11, A13, T3,  };

			double T4Scores[3];

			T4Scores[0] = P10();
			T4Scores[1] = P11();
			T4Scores[2] = P12();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[7] = { A12, A13, T2, A11, A14, A10, T1,  };

			double T5Scores[7];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();
			T5Scores[3] = P16();
			T5Scores[4] = P3();
			T5Scores[5] = P17();
			T5Scores[6] = P18();

			int best = bestProgram(T5Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[7] = { A11, A13, T5, A12, T0, T2, A14,  };

			double T6Scores[7];

			T6Scores[0] = P19();
			T6Scores[1] = P11();
			T6Scores[2] = P20();
			T6Scores[3] = P21();
			T6Scores[4] = P22();
			T6Scores[5] = P23();
			T6Scores[6] = P24();

			int best = bestProgram(T6Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T5, T6,  };

			double T7Scores[2];

			T7Scores[0] = P25();
			T7Scores[1] = P26();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[6] = { A12, A9, T7, T4, A11, T0,  };

			double T8Scores[6];

			T8Scores[0] = P27();
			T8Scores[1] = P28();
			T8Scores[2] = P29();
			T8Scores[3] = P30();
			T8Scores[4] = P31();
			T8Scores[5] = P32();

			int best = bestProgram(T8Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A9: {
			return 2;
			break;
		}
		case A10: {
			return 4;
			break;
		}
		case A11: {
			return 5;
			break;
		}
		case A12: {
			return 6;
			break;
		}
		case A13: {
			return 8;
			break;
		}
		case A14: {
			return 0;
			break;
		}
		}
	}
}
