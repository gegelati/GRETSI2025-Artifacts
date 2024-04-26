/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:01:43
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, A12, A13, A14, A15, A16, A17, A18, };

int inferenceTPG() {
	enum vertices currentVertex = T11;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A15, A14,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A13, A16, A15,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A15, A16,  };

			double T2Scores[2];

			T2Scores[0] = P0();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A14, T0,  };

			double T3Scores[2];

			T3Scores[0] = P6();
			T3Scores[1] = P7();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { T1, A18, A15, A17,  };

			double T4Scores[4];

			T4Scores[0] = P8();
			T4Scores[1] = P9();
			T4Scores[2] = P10();
			T4Scores[3] = P11();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T1, T3, A18, A16,  };

			double T5Scores[4];

			T5Scores[0] = P12();
			T5Scores[1] = P13();
			T5Scores[2] = P14();
			T5Scores[3] = P15();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T2, T4,  };

			double T6Scores[2];

			T6Scores[0] = P16();
			T6Scores[1] = P17();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { T1, A16, A16, A18, A14,  };

			double T7Scores[5];

			T7Scores[0] = P18();
			T7Scores[1] = P19();
			T7Scores[2] = P20();
			T7Scores[3] = P21();
			T7Scores[4] = P22();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T7, A17, T5, T6,  };

			double T8Scores[4];

			T8Scores[0] = P23();
			T8Scores[1] = P24();
			T8Scores[2] = P25();
			T8Scores[3] = P26();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T7, T5,  };

			double T9Scores[2];

			T9Scores[0] = P27();
			T9Scores[1] = P28();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T9, T5,  };

			double T10Scores[2];

			T10Scores[0] = P29();
			T10Scores[1] = P25();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[5] = { T10, T8, A12, T8, A15,  };

			double T11Scores[5];

			T11Scores[0] = P30();
			T11Scores[1] = P31();
			T11Scores[2] = P32();
			T11Scores[3] = P33();
			T11Scores[4] = P34();

			int best = bestProgram(T11Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A12: {
			return 1;
			break;
		}
		case A13: {
			return 2;
			break;
		}
		case A14: {
			return 3;
			break;
		}
		case A15: {
			return 5;
			break;
		}
		case A16: {
			return 6;
			break;
		}
		case A17: {
			return 7;
			break;
		}
		case A18: {
			return 0;
			break;
		}
		}
	}
}
