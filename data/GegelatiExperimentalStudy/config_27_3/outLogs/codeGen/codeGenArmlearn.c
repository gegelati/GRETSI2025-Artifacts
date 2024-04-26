/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:00:59
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, A10, A11, A12, A13, A14, A15, A16, };

int inferenceTPG() {
	enum vertices currentVertex = T9;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A14, A15,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A10, A14,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P0();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A14, A16, A11, A14,  };

			double T2Scores[4];

			T2Scores[0] = P3();
			T2Scores[1] = P4();
			T2Scores[2] = P5();
			T2Scores[3] = P6();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A15, A14, A13, T2,  };

			double T3Scores[4];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[6] = { A13, A14, T0, A12, A16, A11,  };

			double T4Scores[6];

			T4Scores[0] = P11();
			T4Scores[1] = P12();
			T4Scores[2] = P13();
			T4Scores[3] = P14();
			T4Scores[4] = P15();
			T4Scores[5] = P16();

			int best = bestProgram(T4Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T4, T3,  };

			double T5Scores[2];

			T5Scores[0] = P17();
			T5Scores[1] = P18();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { T1, A11, T4, T5, T4,  };

			double T6Scores[5];

			T6Scores[0] = P19();
			T6Scores[1] = P20();
			T6Scores[2] = P21();
			T6Scores[3] = P22();
			T6Scores[4] = P23();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T1, A11, T4, T4,  };

			double T7Scores[4];

			T7Scores[0] = P19();
			T7Scores[1] = P20();
			T7Scores[2] = P21();
			T7Scores[3] = P24();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T3, T7, T6,  };

			double T8Scores[3];

			T8Scores[0] = P25();
			T8Scores[1] = P26();
			T8Scores[2] = P27();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T8, T4,  };

			double T9Scores[2];

			T9Scores[0] = P28();
			T9Scores[1] = P29();

			int best = bestProgram(T9Scores, 2);
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
			return 8;
			break;
		}
		}
	}
}
