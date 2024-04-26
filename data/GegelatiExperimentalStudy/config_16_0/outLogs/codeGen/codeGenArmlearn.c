/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:08:53
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, A10, A11, A12, A13, A14, A15, };

int inferenceTPG() {
	enum vertices currentVertex = T9;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A14, A11,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A11, A13, A14,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P0();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A11, T1, A15,  };

			double T2Scores[3];

			T2Scores[0] = P2();
			T2Scores[1] = P4();
			T2Scores[2] = P5();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[6] = { A13, A14, T2, A11, A12, A13,  };

			double T3Scores[6];

			T3Scores[0] = P6();
			T3Scores[1] = P7();
			T3Scores[2] = P8();
			T3Scores[3] = P9();
			T3Scores[4] = P10();
			T3Scores[5] = P3();

			int best = bestProgram(T3Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A10, A11,  };

			double T4Scores[2];

			T4Scores[0] = P11();
			T4Scores[1] = P12();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { A10, A11, T2,  };

			double T5Scores[3];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P8();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { A10, A14, T0, T2, A11,  };

			double T6Scores[5];

			T6Scores[0] = P13();
			T6Scores[1] = P15();
			T6Scores[2] = P16();
			T6Scores[3] = P8();
			T6Scores[4] = P9();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { T4, T5, T2, T2, A11,  };

			double T7Scores[5];

			T7Scores[0] = P17();
			T7Scores[1] = P18();
			T7Scores[2] = P19();
			T7Scores[3] = P20();
			T7Scores[4] = P21();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T7, T6, T3,  };

			double T8Scores[3];

			T8Scores[0] = P22();
			T8Scores[1] = P23();
			T8Scores[2] = P24();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T8, A10,  };

			double T9Scores[2];

			T9Scores[0] = P25();
			T9Scores[1] = P26();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
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
		case A12: {
			return 6;
			break;
		}
		case A13: {
			return 4;
			break;
		}
		case A14: {
			return 7;
			break;
		}
		case A15: {
			return 8;
			break;
		}
		}
	}
}
