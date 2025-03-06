/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:01:13
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, A24, A25, A26, A27, A28, A29, A30, A31, };

int inferenceTPG() {
	enum vertices currentVertex = T23;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A29, A25,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A25, A30,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A26, A31,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A25, A29,  };

			double T3Scores[2];

			T3Scores[0] = P1();
			T3Scores[1] = P0();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A26, A29,  };

			double T4Scores[2];

			T4Scores[0] = P6();
			T4Scores[1] = P7();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A28, T0,  };

			double T5Scores[2];

			T5Scores[0] = P8();
			T5Scores[1] = P9();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A26, A25, A28,  };

			double T6Scores[3];

			T6Scores[0] = P10();
			T6Scores[1] = P11();
			T6Scores[2] = P12();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { A25, A29,  };

			double T7Scores[2];

			T7Scores[0] = P13();
			T7Scores[1] = P14();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { A30, T3,  };

			double T8Scores[2];

			T8Scores[0] = P15();
			T8Scores[1] = P16();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T2, T1,  };

			double T9Scores[2];

			T9Scores[0] = P17();
			T9Scores[1] = P18();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { A24, A25, A28, A25, T3,  };

			double T10Scores[5];

			T10Scores[0] = P19();
			T10Scores[1] = P20();
			T10Scores[2] = P21();
			T10Scores[3] = P22();
			T10Scores[4] = P23();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T6, T10, A26,  };

			double T11Scores[3];

			T11Scores[0] = P24();
			T11Scores[1] = P25();
			T11Scores[2] = P26();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[5] = { T11, T1, T8, T2, T5,  };

			double T12Scores[5];

			T12Scores[0] = P27();
			T12Scores[1] = P28();
			T12Scores[2] = P29();
			T12Scores[3] = P17();
			T12Scores[4] = P30();

			int best = bestProgram(T12Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T7, T12,  };

			double T13Scores[2];

			T13Scores[0] = P31();
			T13Scores[1] = P32();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[2] = { T11, T5,  };

			double T14Scores[2];

			T14Scores[0] = P27();
			T14Scores[1] = P30();

			int best = bestProgram(T14Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[4] = { T13, T5, T9, T2,  };

			double T15Scores[4];

			T15Scores[0] = P33();
			T15Scores[1] = P30();
			T15Scores[2] = P34();
			T15Scores[3] = P17();

			int best = bestProgram(T15Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[6] = { A27, T12, A27, T4, T14, T5,  };

			double T16Scores[6];

			T16Scores[0] = P35();
			T16Scores[1] = P32();
			T16Scores[2] = P36();
			T16Scores[3] = P37();
			T16Scores[4] = P38();
			T16Scores[5] = P39();

			int best = bestProgram(T16Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[5] = { T12, T9, T11, T5, T9,  };

			double T17Scores[5];

			T17Scores[0] = P40();
			T17Scores[1] = P41();
			T17Scores[2] = P27();
			T17Scores[3] = P42();
			T17Scores[4] = P43();

			int best = bestProgram(T17Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[3] = { A27, T17, T2,  };

			double T18Scores[3];

			T18Scores[0] = P44();
			T18Scores[1] = P45();
			T18Scores[2] = P17();

			int best = bestProgram(T18Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[2] = { T4, T15,  };

			double T19Scores[2];

			T19Scores[0] = P46();
			T19Scores[1] = P47();

			int best = bestProgram(T19Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[2] = { T16, T19,  };

			double T20Scores[2];

			T20Scores[0] = P48();
			T20Scores[1] = P49();

			int best = bestProgram(T20Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T21: {
			const enum vertices next[2] = { T16, T18,  };

			double T21Scores[2];

			T21Scores[0] = P50();
			T21Scores[1] = P51();

			int best = bestProgram(T21Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T22: {
			const enum vertices next[2] = { T21, A29,  };

			double T22Scores[2];

			T22Scores[0] = P52();
			T22Scores[1] = P53();

			int best = bestProgram(T22Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T23: {
			const enum vertices next[4] = { T20, T18, T0, T22,  };

			double T23Scores[4];

			T23Scores[0] = P54();
			T23Scores[1] = P55();
			T23Scores[2] = P56();
			T23Scores[3] = P57();

			int best = bestProgram(T23Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A24: {
			return 3;
			break;
		}
		case A25: {
			return 4;
			break;
		}
		case A26: {
			return 5;
			break;
		}
		case A27: {
			return 6;
			break;
		}
		case A28: {
			return 7;
			break;
		}
		case A29: {
			return 8;
			break;
		}
		case A30: {
			return 0;
			break;
		}
		case A31: {
			return 1;
			break;
		}
		}
	}
}
