/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-17 17:26:01
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, A26, A27, A28, A29, A30, A31, A32, };

int inferenceTPG() {
	enum vertices currentVertex = T25;
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
			const enum vertices next[2] = { A32, A29,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P0();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A32, A31,  };

			double T2Scores[2];

			T2Scores[0] = P3();
			T2Scores[1] = P4();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A26, A30, T2,  };

			double T3Scores[3];

			T3Scores[0] = P5();
			T3Scores[1] = P6();
			T3Scores[2] = P7();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A30, A31,  };

			double T4Scores[2];

			T4Scores[0] = P8();
			T4Scores[1] = P9();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T4, A32, T2,  };

			double T5Scores[3];

			T5Scores[0] = P10();
			T5Scores[1] = P11();
			T5Scores[2] = P7();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { A30, T2, A31, T3, A26,  };

			double T6Scores[5];

			T6Scores[0] = P12();
			T6Scores[1] = P7();
			T6Scores[2] = P13();
			T6Scores[3] = P14();
			T6Scores[4] = P5();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { A26, A30, A31, A32, A27,  };

			double T7Scores[5];

			T7Scores[0] = P15();
			T7Scores[1] = P16();
			T7Scores[2] = P9();
			T7Scores[3] = P17();
			T7Scores[4] = P18();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T3, A26, A30,  };

			double T8Scores[3];

			T8Scores[0] = P19();
			T8Scores[1] = P5();
			T8Scores[2] = P20();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { A26, A30, A31, A32,  };

			double T9Scores[4];

			T9Scores[0] = P5();
			T9Scores[1] = P16();
			T9Scores[2] = P21();
			T9Scores[3] = P22();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[7] = { T9, A26, T6, A27, A32, A30, T3,  };

			double T10Scores[7];

			T10Scores[0] = P23();
			T10Scores[1] = P5();
			T10Scores[2] = P24();
			T10Scores[3] = P25();
			T10Scores[4] = P26();
			T10Scores[5] = P16();
			T10Scores[6] = P27();

			int best = bestProgram(T10Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { A26, T7, A26, T6,  };

			double T11Scores[4];

			T11Scores[0] = P28();
			T11Scores[1] = P29();
			T11Scores[2] = P5();
			T11Scores[3] = P30();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[7] = { A26, T8, T3, T0, T6, T3, A32,  };

			double T12Scores[7];

			T12Scores[0] = P31();
			T12Scores[1] = P32();
			T12Scores[2] = P33();
			T12Scores[3] = P34();
			T12Scores[4] = P30();
			T12Scores[5] = P35();
			T12Scores[6] = P17();

			int best = bestProgram(T12Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { A27, A26, T3,  };

			double T13Scores[3];

			T13Scores[0] = P36();
			T13Scores[1] = P37();
			T13Scores[2] = P38();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T7, A26, T6, A26,  };

			double T14Scores[4];

			T14Scores[0] = P39();
			T14Scores[1] = P40();
			T14Scores[2] = P30();
			T14Scores[3] = P5();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[6] = { T7, A27, A26, T12, A27, T6,  };

			double T15Scores[6];

			T15Scores[0] = P41();
			T15Scores[1] = P42();
			T15Scores[2] = P40();
			T15Scores[3] = P43();
			T15Scores[4] = P44();
			T15Scores[5] = P30();

			int best = bestProgram(T15Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[5] = { T13, T12, A26, T10, A26,  };

			double T16Scores[5];

			T16Scores[0] = P45();
			T16Scores[1] = P43();
			T16Scores[2] = P15();
			T16Scores[3] = P46();
			T16Scores[4] = P37();

			int best = bestProgram(T16Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[3] = { T16, T11, A27,  };

			double T17Scores[3];

			T17Scores[0] = P47();
			T17Scores[1] = P48();
			T17Scores[2] = P49();

			int best = bestProgram(T17Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[2] = { A27, T16,  };

			double T18Scores[2];

			T18Scores[0] = P50();
			T18Scores[1] = P51();

			int best = bestProgram(T18Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[4] = { A27, T11, T15, T16,  };

			double T19Scores[4];

			T19Scores[0] = P49();
			T19Scores[1] = P48();
			T19Scores[2] = P52();
			T19Scores[3] = P53();

			int best = bestProgram(T19Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T20: {
			const enum vertices next[5] = { A28, T17, T15, T15, A30,  };

			double T20Scores[5];

			T20Scores[0] = P54();
			T20Scores[1] = P55();
			T20Scores[2] = P56();
			T20Scores[3] = P57();
			T20Scores[4] = P58();

			int best = bestProgram(T20Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T21: {
			const enum vertices next[7] = { T19, A27, T15, T5, T17, A28, T16,  };

			double T21Scores[7];

			T21Scores[0] = P59();
			T21Scores[1] = P60();
			T21Scores[2] = P61();
			T21Scores[3] = P62();
			T21Scores[4] = P63();
			T21Scores[5] = P64();
			T21Scores[6] = P65();

			int best = bestProgram(T21Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T22: {
			const enum vertices next[6] = { T18, T15, A30, A27, T6, T6,  };

			double T22Scores[6];

			T22Scores[0] = P66();
			T22Scores[1] = P67();
			T22Scores[2] = P68();
			T22Scores[3] = P69();
			T22Scores[4] = P30();
			T22Scores[5] = P70();

			int best = bestProgram(T22Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T23: {
			const enum vertices next[4] = { T20, A27, T17, T21,  };

			double T23Scores[4];

			T23Scores[0] = P71();
			T23Scores[1] = P72();
			T23Scores[2] = P73();
			T23Scores[3] = P74();

			int best = bestProgram(T23Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T24: {
			const enum vertices next[6] = { T23, T1, T22, T16, T14, T16,  };

			double T24Scores[6];

			T24Scores[0] = P75();
			T24Scores[1] = P76();
			T24Scores[2] = P77();
			T24Scores[3] = P78();
			T24Scores[4] = P79();
			T24Scores[5] = P80();

			int best = bestProgram(T24Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T25: {
			const enum vertices next[4] = { T23, T1, T20, T24,  };

			double T25Scores[4];

			T25Scores[0] = P81();
			T25Scores[1] = P82();
			T25Scores[2] = P83();
			T25Scores[3] = P84();

			int best = bestProgram(T25Scores, 4);
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
			return 3;
			break;
		}
		case A30: {
			return 4;
			break;
		}
		case A31: {
			return 5;
			break;
		}
		case A32: {
			return 6;
			break;
		}
		}
	}
}
