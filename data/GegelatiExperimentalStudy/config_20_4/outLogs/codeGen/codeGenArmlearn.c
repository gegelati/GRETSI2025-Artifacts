/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:11:48
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, A9, A10, A11, A12, A13, };

int inferenceTPG() {
	enum vertices currentVertex = T8;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A9, A9,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A13, A9,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P0();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A10, T1,  };

			double T2Scores[2];

			T2Scores[0] = P3();
			T2Scores[1] = P4();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A12, T2,  };

			double T3Scores[2];

			T3Scores[0] = P5();
			T3Scores[1] = P6();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A13, T0,  };

			double T4Scores[2];

			T4Scores[0] = P7();
			T4Scores[1] = P8();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A13, A9,  };

			double T5Scores[2];

			T5Scores[0] = P9();
			T5Scores[1] = P10();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T5, T4, T3,  };

			double T6Scores[3];

			T6Scores[0] = P11();
			T6Scores[1] = P12();
			T6Scores[2] = P13();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T6, A11, T0, A11,  };

			double T7Scores[4];

			T7Scores[0] = P14();
			T7Scores[1] = P15();
			T7Scores[2] = P16();
			T7Scores[3] = P17();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T7, A12,  };

			double T8Scores[2];

			T8Scores[0] = P18();
			T8Scores[1] = P19();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A9: {
			return 3;
			break;
		}
		case A10: {
			return 4;
			break;
		}
		case A11: {
			return 6;
			break;
		}
		case A12: {
			return 8;
			break;
		}
		case A13: {
			return 0;
			break;
		}
		}
	}
}
