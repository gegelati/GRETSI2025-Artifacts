/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:09:52
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, A7, A8, A9, A10, A11, A12, A13, };

int inferenceTPG() {
	enum vertices currentVertex = T6;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A11, A13,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A7, A10,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A10, A7, A13, A13,  };

			double T2Scores[4];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();
			T2Scores[3] = P7();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T1, A13,  };

			double T3Scores[2];

			T3Scores[0] = P8();
			T3Scores[1] = P9();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A12, T2,  };

			double T4Scores[2];

			T4Scores[0] = P10();
			T4Scores[1] = P11();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T3, T4,  };

			double T5Scores[2];

			T5Scores[0] = P12();
			T5Scores[1] = P13();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[8] = { A8, T2, A9, A9, A9, T5, A8, T0,  };

			double T6Scores[8];

			T6Scores[0] = P14();
			T6Scores[1] = P15();
			T6Scores[2] = P16();
			T6Scores[3] = P17();
			T6Scores[4] = P18();
			T6Scores[5] = P19();
			T6Scores[6] = P20();
			T6Scores[7] = P21();

			int best = bestProgram(T6Scores, 8);
			currentVertex = next[best];
			break;
		}
		case A7: {
			return 0;
			break;
		}
		case A8: {
			return 1;
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
			return 7;
			break;
		}
		}
	}
}
