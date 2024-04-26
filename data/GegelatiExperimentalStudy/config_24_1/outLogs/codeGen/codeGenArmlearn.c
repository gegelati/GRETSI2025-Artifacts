/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 15:17:42
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, A12, A13, A14, A15, A16, };

int inferenceTPG() {
	enum vertices currentVertex = T11;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A16, A12, A14, A13,  };

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
			const enum vertices next[2] = { A16, A14,  };

			double T1Scores[2];

			T1Scores[0] = P4();
			T1Scores[1] = P5();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A15, A13,  };

			double T2Scores[2];

			T2Scores[0] = P6();
			T2Scores[1] = P7();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A16, A13, A14, A15,  };

			double T3Scores[4];

			T3Scores[0] = P8();
			T3Scores[1] = P9();
			T3Scores[2] = P10();
			T3Scores[3] = P11();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[6] = { A14, A16, A12, T0, A13, A12,  };

			double T4Scores[6];

			T4Scores[0] = P12();
			T4Scores[1] = P8();
			T4Scores[2] = P13();
			T4Scores[3] = P14();
			T4Scores[4] = P9();
			T4Scores[5] = P15();

			int best = bestProgram(T4Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T0, A13, A15, A12,  };

			double T5Scores[4];

			T5Scores[0] = P16();
			T5Scores[1] = P17();
			T5Scores[2] = P18();
			T5Scores[3] = P19();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T4, T2, T3,  };

			double T6Scores[3];

			T6Scores[0] = P20();
			T6Scores[1] = P21();
			T6Scores[2] = P22();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T4, T2, T2,  };

			double T7Scores[3];

			T7Scores[0] = P23();
			T7Scores[1] = P24();
			T7Scores[2] = P21();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T7, T4,  };

			double T8Scores[2];

			T8Scores[0] = P25();
			T8Scores[1] = P26();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T1, T6,  };

			double T9Scores[2];

			T9Scores[0] = P27();
			T9Scores[1] = P28();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T5, T9,  };

			double T10Scores[2];

			T10Scores[0] = P29();
			T10Scores[1] = P30();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[5] = { T10, T9, T5, T8, T5,  };

			double T11Scores[5];

			T11Scores[0] = P31();
			T11Scores[1] = P32();
			T11Scores[2] = P33();
			T11Scores[3] = P34();
			T11Scores[4] = P35();

			int best = bestProgram(T11Scores, 5);
			currentVertex = next[best];
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
			return 7;
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
