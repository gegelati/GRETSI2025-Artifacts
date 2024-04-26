/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 09:35:09
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, A28, A29, A30, A31, A32, A33, A34, A35, };

int inferenceTPG() {
	enum vertices currentVertex = T27;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A29, A30,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A33, A31,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A35, A32,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { T2, A31, A33, A35,  };

			double T3Scores[4];

			T3Scores[0] = P6();
			T3Scores[1] = P3();
			T3Scores[2] = P7();
			T3Scores[3] = P8();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T1, A28, A34,  };

			double T4Scores[3];

			T4Scores[0] = P9();
			T4Scores[1] = P10();
			T4Scores[2] = P11();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T1, A35, A32,  };

			double T5Scores[3];

			T5Scores[0] = P12();
			T5Scores[1] = P13();
			T5Scores[2] = P14();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { A35, A35, T5, T3,  };

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
			const enum vertices next[4] = { T3, T2, A28, A35,  };

			double T7Scores[4];

			T7Scores[0] = P19();
			T7Scores[1] = P20();
			T7Scores[2] = P21();
			T7Scores[3] = P22();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T6, A28, T4, T3,  };

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
			const enum vertices next[4] = { T6, T7, A29, T4,  };

			double T9Scores[4];

			T9Scores[0] = P27();
			T9Scores[1] = P28();
			T9Scores[2] = P29();
			T9Scores[3] = P30();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T6, T4,  };

			double T10Scores[2];

			T10Scores[0] = P31();
			T10Scores[1] = P32();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T0, A30, T8,  };

			double T11Scores[3];

			T11Scores[0] = P33();
			T11Scores[1] = P34();
			T11Scores[2] = P35();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { T11, T9,  };

			double T12Scores[2];

			T12Scores[0] = P36();
			T12Scores[1] = P37();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { T9, T12, T10,  };

			double T13Scores[3];

			T13Scores[0] = P38();
			T13Scores[1] = P39();
			T13Scores[2] = P40();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[2] = { T10, T12,  };

			double T14Scores[2];

			T14Scores[0] = P41();
			T14Scores[1] = P42();

			int best = bestProgram(T14Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[3] = { T13, T7, T11,  };

			double T15Scores[3];

			T15Scores[0] = P43();
			T15Scores[1] = P44();
			T15Scores[2] = P36();

			int best = bestProgram(T15Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[2] = { T13, T11,  };

			double T16Scores[2];

			T16Scores[0] = P45();
			T16Scores[1] = P36();

			int best = bestProgram(T16Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[3] = { T13, T11, T14,  };

			double T17Scores[3];

			T17Scores[0] = P43();
			T17Scores[1] = P36();
			T17Scores[2] = P46();

			int best = bestProgram(T17Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[4] = { T15, T15, A28, A32,  };

			double T18Scores[4];

			T18Scores[0] = P47();
			T18Scores[1] = P48();
			T18Scores[2] = P24();
			T18Scores[3] = P49();

			int best = bestProgram(T18Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[6] = { T15, T16, T0, A32, T7, A28,  };

			double T19Scores[6];

			T19Scores[0] = P50();
			T19Scores[1] = P51();
			T19Scores[2] = P52();
			T19Scores[3] = P49();
			T19Scores[4] = P53();
			T19Scores[5] = P24();

			int best = bestProgram(T19Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[8] = { T15, T16, T0, T15, A32, A28, T17, A33,  };

			double T20Scores[8];

			T20Scores[0] = P54();
			T20Scores[1] = P55();
			T20Scores[2] = P52();
			T20Scores[3] = P56();
			T20Scores[4] = P49();
			T20Scores[5] = P24();
			T20Scores[6] = P57();
			T20Scores[7] = P58();

			int best = bestProgram(T20Scores, 8);
			currentVertex = next[best];
			break;
		}
		case T21: {
			const enum vertices next[3] = { T16, T19, T16,  };

			double T21Scores[3];

			T21Scores[0] = P59();
			T21Scores[1] = P60();
			T21Scores[2] = P61();

			int best = bestProgram(T21Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T22: {
			const enum vertices next[6] = { T15, A32, A28, T17, A33, T16,  };

			double T22Scores[6];

			T22Scores[0] = P54();
			T22Scores[1] = P49();
			T22Scores[2] = P24();
			T22Scores[3] = P57();
			T22Scores[4] = P58();
			T22Scores[5] = P62();

			int best = bestProgram(T22Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T23: {
			const enum vertices next[4] = { T21, T22, T18, T7,  };

			double T23Scores[4];

			T23Scores[0] = P63();
			T23Scores[1] = P64();
			T23Scores[2] = P65();
			T23Scores[3] = P66();

			int best = bestProgram(T23Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T24: {
			const enum vertices next[4] = { T21, T22, T18, T19,  };

			double T24Scores[4];

			T24Scores[0] = P63();
			T24Scores[1] = P64();
			T24Scores[2] = P65();
			T24Scores[3] = P67();

			int best = bestProgram(T24Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T25: {
			const enum vertices next[6] = { A34, A30, T23, T20, T16, T18,  };

			double T25Scores[6];

			T25Scores[0] = P68();
			T25Scores[1] = P34();
			T25Scores[2] = P69();
			T25Scores[3] = P70();
			T25Scores[4] = P71();
			T25Scores[5] = P65();

			int best = bestProgram(T25Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T26: {
			const enum vertices next[4] = { T20, T24, T9, A33,  };

			double T26Scores[4];

			T26Scores[0] = P72();
			T26Scores[1] = P73();
			T26Scores[2] = P74();
			T26Scores[3] = P75();

			int best = bestProgram(T26Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T27: {
			const enum vertices next[6] = { T7, T25, T26, A30, T3, T19,  };

			double T27Scores[6];

			T27Scores[0] = P76();
			T27Scores[1] = P77();
			T27Scores[2] = P78();
			T27Scores[3] = P79();
			T27Scores[4] = P19();
			T27Scores[5] = P80();

			int best = bestProgram(T27Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A28: {
			return 0;
			break;
		}
		case A29: {
			return 1;
			break;
		}
		case A30: {
			return 2;
			break;
		}
		case A31: {
			return 3;
			break;
		}
		case A32: {
			return 4;
			break;
		}
		case A33: {
			return 5;
			break;
		}
		case A34: {
			return 6;
			break;
		}
		case A35: {
			return 7;
			break;
		}
		}
	}
}
