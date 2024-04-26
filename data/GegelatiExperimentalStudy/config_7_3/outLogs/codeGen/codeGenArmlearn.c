/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:04:01
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, A26, A27, A28, A29, A30, A31, A32, A33, };

int inferenceTPG() {
	enum vertices currentVertex = T25;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A32, A33,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A30, A31,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A29, A30,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A29, T1, A30, T1,  };

			double T3Scores[4];

			T3Scores[0] = P6();
			T3Scores[1] = P7();
			T3Scores[2] = P8();
			T3Scores[3] = P9();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A26, A32,  };

			double T4Scores[2];

			T4Scores[0] = P10();
			T4Scores[1] = P11();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { A31, A29, A26,  };

			double T5Scores[3];

			T5Scores[0] = P12();
			T5Scores[1] = P13();
			T5Scores[2] = P10();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A29, A30, T1,  };

			double T6Scores[3];

			T6Scores[0] = P14();
			T6Scores[1] = P8();
			T6Scores[2] = P15();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { A28, T1, A29, A26,  };

			double T7Scores[4];

			T7Scores[0] = P16();
			T7Scores[1] = P9();
			T7Scores[2] = P17();
			T7Scores[3] = P18();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { A27, A26,  };

			double T8Scores[2];

			T8Scores[0] = P19();
			T8Scores[1] = P10();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T2, A30, T5,  };

			double T9Scores[3];

			T9Scores[0] = P20();
			T9Scores[1] = P21();
			T9Scores[2] = P22();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { A30, A29, T4, A26, T1,  };

			double T10Scores[5];

			T10Scores[0] = P23();
			T10Scores[1] = P24();
			T10Scores[2] = P25();
			T10Scores[3] = P26();
			T10Scores[4] = P27();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { A29, T4, T1,  };

			double T11Scores[3];

			T11Scores[0] = P28();
			T11Scores[1] = P29();
			T11Scores[2] = P30();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { A26, T3,  };

			double T12Scores[2];

			T12Scores[0] = P31();
			T12Scores[1] = P32();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { A30, T0, A26, A31,  };

			double T13Scores[4];

			T13Scores[0] = P23();
			T13Scores[1] = P33();
			T13Scores[2] = P10();
			T13Scores[3] = P34();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { A26, T11, A26,  };

			double T14Scores[3];

			T14Scores[0] = P35();
			T14Scores[1] = P36();
			T14Scores[2] = P37();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T10, A29,  };

			double T15Scores[2];

			T15Scores[0] = P38();
			T15Scores[1] = P39();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[3] = { T14, T3, T10,  };

			double T16Scores[3];

			T16Scores[0] = P40();
			T16Scores[1] = P32();
			T16Scores[2] = P41();

			int best = bestProgram(T16Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[5] = { T1, T1, T13, T12, T8,  };

			double T17Scores[5];

			T17Scores[0] = P42();
			T17Scores[1] = P43();
			T17Scores[2] = P44();
			T17Scores[3] = P45();
			T17Scores[4] = P46();

			int best = bestProgram(T17Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[2] = { T9, T1,  };

			double T18Scores[2];

			T18Scores[0] = P47();
			T18Scores[1] = P48();

			int best = bestProgram(T18Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[2] = { A29, T13,  };

			double T19Scores[2];

			T19Scores[0] = P49();
			T19Scores[1] = P44();

			int best = bestProgram(T19Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[4] = { T16, T17, T1, T19,  };

			double T20Scores[4];

			T20Scores[0] = P50();
			T20Scores[1] = P51();
			T20Scores[2] = P52();
			T20Scores[3] = P53();

			int best = bestProgram(T20Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T21: {
			const enum vertices next[6] = { T16, T1, T17, A28, T15, T12,  };

			double T21Scores[6];

			T21Scores[0] = P54();
			T21Scores[1] = P55();
			T21Scores[2] = P56();
			T21Scores[3] = P57();
			T21Scores[4] = P58();
			T21Scores[5] = P45();

			int best = bestProgram(T21Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T22: {
			const enum vertices next[5] = { T9, T14, T7, T1, T21,  };

			double T22Scores[5];

			T22Scores[0] = P59();
			T22Scores[1] = P60();
			T22Scores[2] = P61();
			T22Scores[3] = P62();
			T22Scores[4] = P63();

			int best = bestProgram(T22Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T23: {
			const enum vertices next[2] = { T20, A28,  };

			double T23Scores[2];

			T23Scores[0] = P64();
			T23Scores[1] = P65();

			int best = bestProgram(T23Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T24: {
			const enum vertices next[7] = { T18, A26, A28, T22, T17, T6, A27,  };

			double T24Scores[7];

			T24Scores[0] = P66();
			T24Scores[1] = P10();
			T24Scores[2] = P67();
			T24Scores[3] = P68();
			T24Scores[4] = P69();
			T24Scores[5] = P70();
			T24Scores[6] = P71();

			int best = bestProgram(T24Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T25: {
			const enum vertices next[2] = { T24, T23,  };

			double T25Scores[2];

			T25Scores[0] = P72();
			T25Scores[1] = P73();

			int best = bestProgram(T25Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A26: {
			return 0;
			break;
		}
		case A27: {
			return 1;
			break;
		}
		case A28: {
			return 2;
			break;
		}
		case A29: {
			return 4;
			break;
		}
		case A30: {
			return 5;
			break;
		}
		case A31: {
			return 6;
			break;
		}
		case A32: {
			return 7;
			break;
		}
		case A33: {
			return 8;
			break;
		}
		}
	}
}
