/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:00:25
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, A11, A12, A13, A14, A15, A16, A17, };

int inferenceTPG() {
	enum vertices currentVertex = T10;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A14, A16, A11,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A15, A16, A17,  };

			double T1Scores[3];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T1, T1,  };

			double T2Scores[2];

			T2Scores[0] = P6();
			T2Scores[1] = P7();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A11, T1,  };

			double T3Scores[2];

			T3Scores[0] = P8();
			T3Scores[1] = P9();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T3, A16, T2,  };

			double T4Scores[3];

			T4Scores[0] = P10();
			T4Scores[1] = P11();
			T4Scores[2] = P12();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A14, T4,  };

			double T5Scores[2];

			T5Scores[0] = P13();
			T5Scores[1] = P14();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { T5, A12, T0, A14,  };

			double T6Scores[4];

			T6Scores[0] = P15();
			T6Scores[1] = P16();
			T6Scores[2] = P17();
			T6Scores[3] = P18();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T5, T0, A12, A11,  };

			double T7Scores[4];

			T7Scores[0] = P19();
			T7Scores[1] = P17();
			T7Scores[2] = P20();
			T7Scores[3] = P21();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A13, A16, A16, T7,  };

			double T8Scores[4];

			T8Scores[0] = P22();
			T8Scores[1] = P23();
			T8Scores[2] = P4();
			T8Scores[3] = P24();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { A16, T8,  };

			double T9Scores[2];

			T9Scores[0] = P4();
			T9Scores[1] = P25();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[6] = { T5, T7, A17, A12, T6, T9,  };

			double T10Scores[6];

			T10Scores[0] = P19();
			T10Scores[1] = P26();
			T10Scores[2] = P27();
			T10Scores[3] = P28();
			T10Scores[4] = P29();
			T10Scores[5] = P30();

			int best = bestProgram(T10Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A11: {
			return 0;
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
			return 4;
			break;
		}
		case A16: {
			return 5;
			break;
		}
		case A17: {
			return 7;
			break;
		}
		}
	}
}
