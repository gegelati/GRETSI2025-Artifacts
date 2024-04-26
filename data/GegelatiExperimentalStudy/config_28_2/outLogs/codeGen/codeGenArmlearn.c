/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:01:29
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, A8, A9, A10, A11, A12, A13, A14, A15, };

int inferenceTPG() {
	enum vertices currentVertex = T7;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A10, A11,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A14, A9, A12,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[6] = { A8, T0, A15, T1, A12, A10,  };

			double T2Scores[6];

			T2Scores[0] = P5();
			T2Scores[1] = P6();
			T2Scores[2] = P7();
			T2Scores[3] = P8();
			T2Scores[4] = P9();
			T2Scores[5] = P10();

			int best = bestProgram(T2Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A10, T2, T1, A9,  };

			double T3Scores[4];

			T3Scores[0] = P11();
			T3Scores[1] = P12();
			T3Scores[2] = P13();
			T3Scores[3] = P14();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { A10, A12, T2, A9, T1,  };

			double T4Scores[5];

			T4Scores[0] = P11();
			T4Scores[1] = P15();
			T4Scores[2] = P12();
			T4Scores[3] = P14();
			T4Scores[4] = P13();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { A15, T3, T4,  };

			double T5Scores[3];

			T5Scores[0] = P16();
			T5Scores[1] = P17();
			T5Scores[2] = P18();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { T3, A10, A15, A12,  };

			double T6Scores[4];

			T6Scores[0] = P19();
			T6Scores[1] = P20();
			T6Scores[2] = P21();
			T6Scores[3] = P22();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { A13, A12, A13, T5, T6, A12,  };

			double T7Scores[6];

			T7Scores[0] = P23();
			T7Scores[1] = P24();
			T7Scores[2] = P25();
			T7Scores[3] = P26();
			T7Scores[4] = P27();
			T7Scores[5] = P28();

			int best = bestProgram(T7Scores, 6);
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
			return 2;
			break;
		}
		case A11: {
			return 3;
			break;
		}
		case A12: {
			return 4;
			break;
		}
		case A13: {
			return 5;
			break;
		}
		case A14: {
			return 8;
			break;
		}
		case A15: {
			return 6;
			break;
		}
		}
	}
}
