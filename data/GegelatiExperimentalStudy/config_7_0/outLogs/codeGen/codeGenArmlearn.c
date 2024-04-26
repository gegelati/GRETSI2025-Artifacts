/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:03:34
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, A9, A10, A11, A12, A13, A14, A15, A16, A17, };

int inferenceTPG() {
	enum vertices currentVertex = T8;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A14, A16, A13, A9,  };

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
			const enum vertices next[6] = { T0, A9, A16, A12, A14, A16,  };

			double T1Scores[6];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P6();
			T1Scores[3] = P7();
			T1Scores[4] = P8();
			T1Scores[5] = P9();

			int best = bestProgram(T1Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A13, A9, A14, A16, A16,  };

			double T2Scores[5];

			T2Scores[0] = P10();
			T2Scores[1] = P3();
			T2Scores[2] = P11();
			T2Scores[3] = P12();
			T2Scores[4] = P13();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A9, A13, A15, A16,  };

			double T3Scores[4];

			T3Scores[0] = P14();
			T3Scores[1] = P15();
			T3Scores[2] = P16();
			T3Scores[3] = P17();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T3, T1, A11,  };

			double T4Scores[3];

			T4Scores[0] = P18();
			T4Scores[1] = P19();
			T4Scores[2] = P20();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T3, T1, A11,  };

			double T5Scores[3];

			T5Scores[0] = P21();
			T5Scores[1] = P19();
			T5Scores[2] = P22();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T2, A9, A14, A17, T4,  };

			double T6Scores[5];

			T6Scores[0] = P23();
			T6Scores[1] = P3();
			T6Scores[2] = P0();
			T6Scores[3] = P24();
			T6Scores[4] = P25();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T2, A9, A11,  };

			double T7Scores[3];

			T7Scores[0] = P26();
			T7Scores[1] = P3();
			T7Scores[2] = P22();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[7] = { A9, T6, T6, T7, A9, A10, T5,  };

			double T8Scores[7];

			T8Scores[0] = P3();
			T8Scores[1] = P27();
			T8Scores[2] = P28();
			T8Scores[3] = P29();
			T8Scores[4] = P30();
			T8Scores[5] = P31();
			T8Scores[6] = P32();

			int best = bestProgram(T8Scores, 7);
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
			return 3;
			break;
		}
		case A13: {
			return 4;
			break;
		}
		case A14: {
			return 5;
			break;
		}
		case A15: {
			return 6;
			break;
		}
		case A16: {
			return 7;
			break;
		}
		case A17: {
			return 8;
			break;
		}
		}
	}
}
