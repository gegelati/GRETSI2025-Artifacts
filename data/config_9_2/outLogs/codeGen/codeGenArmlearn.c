/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:05:07
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, A12, A13, A14, A15, A16, A17, };

int inferenceTPG() {
	enum vertices currentVertex = T11;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A15, A16,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A15, A16, A14,  };

			double T1Scores[3];

			T1Scores[0] = P0();
			T1Scores[1] = P2();
			T1Scores[2] = P3();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A12, A16, A13, A14,  };

			double T2Scores[4];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();
			T2Scores[3] = P3();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A13, A14, A12,  };

			double T3Scores[3];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T2, A12,  };

			double T4Scores[2];

			T4Scores[0] = P10();
			T4Scores[1] = P11();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A13, T1,  };

			double T5Scores[2];

			T5Scores[0] = P6();
			T5Scores[1] = P12();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A13, A12, T5,  };

			double T6Scores[3];

			T6Scores[0] = P13();
			T6Scores[1] = P14();
			T6Scores[2] = P15();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { A13, A17, T3,  };

			double T7Scores[3];

			T7Scores[0] = P16();
			T7Scores[1] = P17();
			T7Scores[2] = P18();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T1, A12, T7, A12,  };

			double T8Scores[4];

			T8Scores[0] = P12();
			T8Scores[1] = P19();
			T8Scores[2] = P20();
			T8Scores[3] = P14();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T8, T6,  };

			double T9Scores[2];

			T9Scores[0] = P21();
			T9Scores[1] = P22();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T4, A14, A17,  };

			double T10Scores[3];

			T10Scores[0] = P23();
			T10Scores[1] = P24();
			T10Scores[2] = P25();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[5] = { A17, T9, T6, T0, T10,  };

			double T11Scores[5];

			T11Scores[0] = P26();
			T11Scores[1] = P27();
			T11Scores[2] = P28();
			T11Scores[3] = P29();
			T11Scores[4] = P30();

			int best = bestProgram(T11Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A12: {
			return 0;
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
