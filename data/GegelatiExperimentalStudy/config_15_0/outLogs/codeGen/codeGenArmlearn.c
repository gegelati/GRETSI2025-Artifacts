/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:08:18
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, A8, A9, A10, A11, A12, A13, };

int inferenceTPG() {
	enum vertices currentVertex = T7;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A10, A11, A12, A8,  };

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
			const enum vertices next[6] = { A12, A11, A12, A8, A12, A8,  };

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
			const enum vertices next[2] = { A8, T1,  };

			double T2Scores[2];

			T2Scores[0] = P10();
			T2Scores[1] = P11();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { T2, A13, A9, T0,  };

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
			const enum vertices next[2] = { A13, T0,  };

			double T4Scores[2];

			T4Scores[0] = P16();
			T4Scores[1] = P15();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[6] = { T1, A8, A11, A9, A9, T0,  };

			double T5Scores[6];

			T5Scores[0] = P17();
			T5Scores[1] = P18();
			T5Scores[2] = P19();
			T5Scores[3] = P20();
			T5Scores[4] = P21();
			T5Scores[5] = P15();

			int best = bestProgram(T5Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { A9, A8, T5, A13,  };

			double T6Scores[4];

			T6Scores[0] = P22();
			T6Scores[1] = P23();
			T6Scores[2] = P24();
			T6Scores[3] = P25();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[7] = { T3, T6, T1, A11, A9, A9, T4,  };

			double T7Scores[7];

			T7Scores[0] = P26();
			T7Scores[1] = P27();
			T7Scores[2] = P28();
			T7Scores[3] = P29();
			T7Scores[4] = P30();
			T7Scores[5] = P31();
			T7Scores[6] = P32();

			int best = bestProgram(T7Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A8: {
			return 0;
			break;
		}
		case A9: {
			return 1;
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
			return 7;
			break;
		}
		case A13: {
			return 8;
			break;
		}
		}
	}
}
