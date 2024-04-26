/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:07:52
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, A9, A10, A11, A12, A13, A14, A15, A16, };

int inferenceTPG() {
	enum vertices currentVertex = T8;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A14, A13, A16,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A14, A13, A16,  };

			double T1Scores[3];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P2();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[7] = { A15, T1, A16, T0, A14, A14, A10,  };

			double T2Scores[7];

			T2Scores[0] = P5();
			T2Scores[1] = P6();
			T2Scores[2] = P7();
			T2Scores[3] = P8();
			T2Scores[4] = P9();
			T2Scores[5] = P10();
			T2Scores[6] = P11();

			int best = bestProgram(T2Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A16, A11, A10,  };

			double T3Scores[3];

			T3Scores[0] = P2();
			T3Scores[1] = P12();
			T3Scores[2] = P13();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A12, A13, T0,  };

			double T4Scores[3];

			T4Scores[0] = P14();
			T4Scores[1] = P15();
			T4Scores[2] = P16();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { T3, T2, T4, T0, T2,  };

			double T5Scores[5];

			T5Scores[0] = P17();
			T5Scores[1] = P18();
			T5Scores[2] = P19();
			T5Scores[3] = P20();
			T5Scores[4] = P21();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { A9, T2, T0, T5,  };

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
			const enum vertices next[3] = { T5, T2, A15,  };

			double T7Scores[3];

			T7Scores[0] = P26();
			T7Scores[1] = P27();
			T7Scores[2] = P28();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T5, T7, T6,  };

			double T8Scores[3];

			T8Scores[0] = P29();
			T8Scores[1] = P30();
			T8Scores[2] = P31();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
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
			return 6;
			break;
		}
		case A15: {
			return 8;
			break;
		}
		case A16: {
			return 0;
			break;
		}
		}
	}
}
