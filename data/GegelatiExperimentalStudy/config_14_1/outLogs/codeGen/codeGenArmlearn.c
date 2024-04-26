/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:07:45
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, A16, A17, A18, A19, A20, A21, A22, A23, };

int inferenceTPG() {
	enum vertices currentVertex = T15;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A20, A21,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { T0, A19, A22,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A18, A22,  };

			double T2Scores[2];

			T2Scores[0] = P5();
			T2Scores[1] = P6();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T1, T2,  };

			double T3Scores[2];

			T3Scores[0] = P7();
			T3Scores[1] = P8();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[5] = { T3, A23, A20, T1, A18,  };

			double T4Scores[5];

			T4Scores[0] = P9();
			T4Scores[1] = P10();
			T4Scores[2] = P11();
			T4Scores[3] = P12();
			T4Scores[4] = P13();

			int best = bestProgram(T4Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A17, T2,  };

			double T5Scores[2];

			T5Scores[0] = P14();
			T5Scores[1] = P15();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A20, T4, A23,  };

			double T6Scores[3];

			T6Scores[0] = P16();
			T6Scores[1] = P17();
			T6Scores[2] = P10();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { A20, T5, T4, A20,  };

			double T7Scores[4];

			T7Scores[0] = P16();
			T7Scores[1] = P18();
			T7Scores[2] = P17();
			T7Scores[3] = P19();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T6, A17,  };

			double T8Scores[2];

			T8Scores[0] = P20();
			T8Scores[1] = P21();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { A20, T5, T1, T4,  };

			double T9Scores[4];

			T9Scores[0] = P16();
			T9Scores[1] = P22();
			T9Scores[2] = P23();
			T9Scores[3] = P17();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T8, T4, A16,  };

			double T10Scores[3];

			T10Scores[0] = P24();
			T10Scores[1] = P17();
			T10Scores[2] = P25();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T10, A17,  };

			double T11Scores[2];

			T11Scores[0] = P26();
			T11Scores[1] = P21();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { T10, T11,  };

			double T12Scores[2];

			T12Scores[0] = P27();
			T12Scores[1] = P28();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T9, T12,  };

			double T13Scores[2];

			T13Scores[0] = P29();
			T13Scores[1] = P30();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { T3, T7, T10,  };

			double T14Scores[3];

			T14Scores[0] = P31();
			T14Scores[1] = P32();
			T14Scores[2] = P27();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T13, T14,  };

			double T15Scores[2];

			T15Scores[0] = P33();
			T15Scores[1] = P34();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A16: {
			return 1;
			break;
		}
		case A17: {
			return 2;
			break;
		}
		case A18: {
			return 4;
			break;
		}
		case A19: {
			return 5;
			break;
		}
		case A20: {
			return 6;
			break;
		}
		case A21: {
			return 7;
			break;
		}
		case A22: {
			return 0;
			break;
		}
		case A23: {
			return 3;
			break;
		}
		}
	}
}
