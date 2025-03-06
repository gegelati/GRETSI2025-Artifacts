/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:06:23
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
			const enum vertices next[3] = { A13, A15, A13,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A14, A10, T0,  };

			double T1Scores[3];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A13, A14, A15,  };

			double T2Scores[3];

			T2Scores[0] = P6();
			T2Scores[1] = P7();
			T2Scores[2] = P8();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[7] = { A11, T0, A14, A12, A10, T1, A13,  };

			double T3Scores[7];

			T3Scores[0] = P9();
			T3Scores[1] = P10();
			T3Scores[2] = P11();
			T3Scores[3] = P12();
			T3Scores[4] = P13();
			T3Scores[5] = P14();
			T3Scores[6] = P15();

			int best = bestProgram(T3Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { A10, T1, T2, A14, A11,  };

			double T4Scores[5];

			T4Scores[0] = P13();
			T4Scores[1] = P14();
			T4Scores[2] = P16();
			T4Scores[3] = P17();
			T4Scores[4] = P9();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T3, T4,  };

			double T5Scores[2];

			T5Scores[0] = P18();
			T5Scores[1] = P19();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T4, T3,  };

			double T6Scores[2];

			T6Scores[0] = P20();
			T6Scores[1] = P18();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T4, T3,  };

			double T7Scores[2];

			T7Scores[0] = P20();
			T7Scores[1] = P18();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A13, T2, A11, T6,  };

			double T8Scores[4];

			T8Scores[0] = P21();
			T8Scores[1] = P16();
			T8Scores[2] = P9();
			T8Scores[3] = P22();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[8] = { T2, T8, T7, A10, A14, T5, A12, A13,  };

			double T9Scores[8];

			T9Scores[0] = P23();
			T9Scores[1] = P24();
			T9Scores[2] = P25();
			T9Scores[3] = P26();
			T9Scores[4] = P11();
			T9Scores[5] = P27();
			T9Scores[6] = P28();
			T9Scores[7] = P6();

			int best = bestProgram(T9Scores, 8);
			currentVertex = next[best];
			break;
		}
		case A10: {
			return 0;
			break;
		}
		case A11: {
			return 1;
			break;
		}
		case A12: {
			return 2;
			break;
		}
		case A13: {
			return 3;
			break;
		}
		case A14: {
			return 4;
			break;
		}
		case A15: {
			return 6;
			break;
		}
		}
	}
}
