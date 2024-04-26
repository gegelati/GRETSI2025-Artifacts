/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 15:59:39
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, A19, A20, A21, A22, A23, A24, A25, };

int inferenceTPG() {
	enum vertices currentVertex = T18;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A22, A19,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A19, A22,  };

			double T1Scores[2];

			T1Scores[0] = P1();
			T1Scores[1] = P2();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A20, A25,  };

			double T2Scores[2];

			T2Scores[0] = P3();
			T2Scores[1] = P4();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A22, A25,  };

			double T3Scores[2];

			T3Scores[0] = P5();
			T3Scores[1] = P6();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A20, A19, A25,  };

			double T4Scores[3];

			T4Scores[0] = P7();
			T4Scores[1] = P8();
			T4Scores[2] = P9();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { A19, A24, A20, A19,  };

			double T5Scores[4];

			T5Scores[0] = P10();
			T5Scores[1] = P11();
			T5Scores[2] = P12();
			T5Scores[3] = P13();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { A19, T0, T3, A25, A24,  };

			double T6Scores[5];

			T6Scores[0] = P13();
			T6Scores[1] = P14();
			T6Scores[2] = P15();
			T6Scores[3] = P16();
			T6Scores[4] = P17();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T4, T2, A25,  };

			double T7Scores[3];

			T7Scores[0] = P18();
			T7Scores[1] = P19();
			T7Scores[2] = P16();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { T6, A21, A22, T7, A23,  };

			double T8Scores[5];

			T8Scores[0] = P20();
			T8Scores[1] = P21();
			T8Scores[2] = P22();
			T8Scores[3] = P23();
			T8Scores[4] = P24();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { A25, A25, A23, A22,  };

			double T9Scores[4];

			T9Scores[0] = P25();
			T9Scores[1] = P26();
			T9Scores[2] = P27();
			T9Scores[3] = P28();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { A19, T0, T9, A25, T1,  };

			double T10Scores[5];

			T10Scores[0] = P13();
			T10Scores[1] = P14();
			T10Scores[2] = P29();
			T10Scores[3] = P16();
			T10Scores[4] = P30();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T8, T7, T8,  };

			double T11Scores[3];

			T11Scores[0] = P31();
			T11Scores[1] = P32();
			T11Scores[2] = P33();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[6] = { T10, A25, T5, A23, A23, T8,  };

			double T12Scores[6];

			T12Scores[0] = P34();
			T12Scores[1] = P35();
			T12Scores[2] = P36();
			T12Scores[3] = P24();
			T12Scores[4] = P37();
			T12Scores[5] = P33();

			int best = bestProgram(T12Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { T10, A25, A23,  };

			double T13Scores[3];

			T13Scores[0] = P34();
			T13Scores[1] = P38();
			T13Scores[2] = P39();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[2] = { A19, T8,  };

			double T14Scores[2];

			T14Scores[0] = P13();
			T14Scores[1] = P33();

			int best = bestProgram(T14Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T13, T8,  };

			double T15Scores[2];

			T15Scores[0] = P40();
			T15Scores[1] = P33();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[4] = { T12, T10, T11, T14,  };

			double T16Scores[4];

			T16Scores[0] = P41();
			T16Scores[1] = P42();
			T16Scores[2] = P43();
			T16Scores[3] = P44();

			int best = bestProgram(T16Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[2] = { T16, A23,  };

			double T17Scores[2];

			T17Scores[0] = P45();
			T17Scores[1] = P46();

			int best = bestProgram(T17Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[4] = { T16, T15, T17, T12,  };

			double T18Scores[4];

			T18Scores[0] = P47();
			T18Scores[1] = P48();
			T18Scores[2] = P49();
			T18Scores[3] = P41();

			int best = bestProgram(T18Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A19: {
			return 0;
			break;
		}
		case A20: {
			return 1;
			break;
		}
		case A21: {
			return 3;
			break;
		}
		case A22: {
			return 4;
			break;
		}
		case A23: {
			return 5;
			break;
		}
		case A24: {
			return 6;
			break;
		}
		case A25: {
			return 7;
			break;
		}
		}
	}
}
