/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:07:33
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, A11, A12, A13, A14, A15, A16, A17, A18, };

int inferenceTPG() {
	enum vertices currentVertex = T10;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A13, A11,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A15, A12, A18,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T1, A12,  };

			double T2Scores[2];

			T2Scores[0] = P5();
			T2Scores[1] = P6();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[6] = { A11, A12, A15, A12, A17, A17,  };

			double T3Scores[6];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();
			T3Scores[4] = P11();
			T3Scores[5] = P12();

			int best = bestProgram(T3Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { A12, T1, A17, A11,  };

			double T4Scores[4];

			T4Scores[0] = P13();
			T4Scores[1] = P5();
			T4Scores[2] = P12();
			T4Scores[3] = P14();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A12, A15, A12, A17,  };

			double T5Scores[4];

			T5Scores[0] = P15();
			T5Scores[1] = P16();
			T5Scores[2] = P17();
			T5Scores[3] = P18();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { A17, A12, A11, A15, T3,  };

			double T6Scores[5];

			T6Scores[0] = P12();
			T6Scores[1] = P3();
			T6Scores[2] = P19();
			T6Scores[3] = P20();
			T6Scores[4] = P21();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { T5, T0, T3, T2, A18, T6,  };

			double T7Scores[6];

			T7Scores[0] = P22();
			T7Scores[1] = P23();
			T7Scores[2] = P24();
			T7Scores[3] = P25();
			T7Scores[4] = P26();
			T7Scores[5] = P27();

			int best = bestProgram(T7Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T7, A14,  };

			double T8Scores[2];

			T8Scores[0] = P28();
			T8Scores[1] = P29();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[5] = { T7, T4, T8, A15, A16,  };

			double T9Scores[5];

			T9Scores[0] = P30();
			T9Scores[1] = P31();
			T9Scores[2] = P32();
			T9Scores[3] = P33();
			T9Scores[4] = P34();

			int best = bestProgram(T9Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T8, A17, T9,  };

			double T10Scores[3];

			T10Scores[0] = P35();
			T10Scores[1] = P36();
			T10Scores[2] = P37();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A11: {
			return 0;
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
			return 7;
			break;
		}
		case A16: {
			return 2;
			break;
		}
		case A17: {
			return 3;
			break;
		}
		case A18: {
			return 8;
			break;
		}
		}
	}
}
