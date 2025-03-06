/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:10:12
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, A18, A19, A20, A21, A22, A23, A24, A25, };

int inferenceTPG() {
	enum vertices currentVertex = T17;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A21, A22,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A21, A22, A18,  };

			double T1Scores[3];

			T1Scores[0] = P0();
			T1Scores[1] = P2();
			T1Scores[2] = P3();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A23, A21,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P0();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A24, A22,  };

			double T3Scores[2];

			T3Scores[0] = P5();
			T3Scores[1] = P6();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A22, A21,  };

			double T4Scores[2];

			T4Scores[0] = P1();
			T4Scores[1] = P0();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { A21, T2, T0,  };

			double T5Scores[3];

			T5Scores[0] = P7();
			T5Scores[1] = P8();
			T5Scores[2] = P9();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A22, A18, T3,  };

			double T6Scores[3];

			T6Scores[0] = P10();
			T6Scores[1] = P11();
			T6Scores[2] = P12();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { A19, A18, T1, A21,  };

			double T7Scores[4];

			T7Scores[0] = P13();
			T7Scores[1] = P14();
			T7Scores[2] = P15();
			T7Scores[3] = P16();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T6, A19, A22,  };

			double T8Scores[3];

			T8Scores[0] = P17();
			T8Scores[1] = P18();
			T8Scores[2] = P19();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T7, T6,  };

			double T9Scores[2];

			T9Scores[0] = P20();
			T9Scores[1] = P17();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T4, A19, A22,  };

			double T10Scores[3];

			T10Scores[0] = P21();
			T10Scores[1] = P22();
			T10Scores[2] = P23();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[5] = { A25, T5, T6, A19, A21,  };

			double T11Scores[5];

			T11Scores[0] = P24();
			T11Scores[1] = P25();
			T11Scores[2] = P17();
			T11Scores[3] = P26();
			T11Scores[4] = P0();

			int best = bestProgram(T11Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { T6, A19, A22, T2,  };

			double T12Scores[4];

			T12Scores[0] = P17();
			T12Scores[1] = P18();
			T12Scores[2] = P27();
			T12Scores[3] = P28();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T8, T10,  };

			double T13Scores[2];

			T13Scores[0] = P29();
			T13Scores[1] = P30();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T2, T11, T9, T12,  };

			double T14Scores[4];

			T14Scores[0] = P31();
			T14Scores[1] = P32();
			T14Scores[2] = P33();
			T14Scores[3] = P34();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T13, T9,  };

			double T15Scores[2];

			T15Scores[0] = P35();
			T15Scores[1] = P36();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[3] = { T6, T14, T7,  };

			double T16Scores[3];

			T16Scores[0] = P37();
			T16Scores[1] = P38();
			T16Scores[2] = P39();

			int best = bestProgram(T16Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[6] = { A20, T6, T11, T15, T16, T7,  };

			double T17Scores[6];

			T17Scores[0] = P40();
			T17Scores[1] = P41();
			T17Scores[2] = P42();
			T17Scores[3] = P43();
			T17Scores[4] = P44();
			T17Scores[5] = P45();

			int best = bestProgram(T17Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A18: {
			return 0;
			break;
		}
		case A19: {
			return 1;
			break;
		}
		case A20: {
			return 2;
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
			return 6;
			break;
		}
		case A24: {
			return 7;
			break;
		}
		case A25: {
			return 5;
			break;
		}
		}
	}
}
