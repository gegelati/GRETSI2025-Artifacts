/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 09:35:25
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, T19, A20, A21, A22, A23, A24, A25, A26, A27, A28, };

int inferenceTPG() {
	enum vertices currentVertex = T19;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A23, A24,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A26, A25,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A27, A25, A20,  };

			double T2Scores[3];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { A24, T1,  };

			double T3Scores[2];

			T3Scores[0] = P7();
			T3Scores[1] = P8();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { A25, A26, A24, A25,  };

			double T4Scores[4];

			T4Scores[0] = P9();
			T4Scores[1] = P10();
			T4Scores[2] = P11();
			T4Scores[3] = P12();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { A25, T2, A26, A28, A24,  };

			double T5Scores[5];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();
			T5Scores[3] = P16();
			T5Scores[4] = P17();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T5, A24,  };

			double T6Scores[2];

			T6Scores[0] = P18();
			T6Scores[1] = P19();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { T4, T6, A26, T0, A26,  };

			double T7Scores[5];

			T7Scores[0] = P20();
			T7Scores[1] = P21();
			T7Scores[2] = P22();
			T7Scores[3] = P23();
			T7Scores[4] = P24();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T7, T5,  };

			double T8Scores[2];

			T8Scores[0] = P25();
			T8Scores[1] = P26();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { A28, T3, A20, T2,  };

			double T9Scores[4];

			T9Scores[0] = P27();
			T9Scores[1] = P28();
			T9Scores[2] = P29();
			T9Scores[3] = P14();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T5, T9, A26,  };

			double T10Scores[3];

			T10Scores[0] = P30();
			T10Scores[1] = P31();
			T10Scores[2] = P15();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T10, T5,  };

			double T11Scores[2];

			T11Scores[0] = P32();
			T11Scores[1] = P33();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { T8, T11,  };

			double T12Scores[2];

			T12Scores[0] = P34();
			T12Scores[1] = P35();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[6] = { T11, A21, T8, A22, T3, A21,  };

			double T13Scores[6];

			T13Scores[0] = P36();
			T13Scores[1] = P37();
			T13Scores[2] = P34();
			T13Scores[3] = P38();
			T13Scores[4] = P39();
			T13Scores[5] = P40();

			int best = bestProgram(T13Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { T11, T8, T8,  };

			double T14Scores[3];

			T14Scores[0] = P41();
			T14Scores[1] = P42();
			T14Scores[2] = P43();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[5] = { T12, T13, T3, A21, T8,  };

			double T15Scores[5];

			T15Scores[0] = P44();
			T15Scores[1] = P45();
			T15Scores[2] = P46();
			T15Scores[3] = P47();
			T15Scores[4] = P48();

			int best = bestProgram(T15Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[4] = { T15, T3, T3, T3,  };

			double T16Scores[4];

			T16Scores[0] = P49();
			T16Scores[1] = P50();
			T16Scores[2] = P51();
			T16Scores[3] = P52();

			int best = bestProgram(T16Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[4] = { T3, A21, T16, T14,  };

			double T17Scores[4];

			T17Scores[0] = P53();
			T17Scores[1] = P47();
			T17Scores[2] = P54();
			T17Scores[3] = P55();

			int best = bestProgram(T17Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[3] = { T13, A22, T15,  };

			double T18Scores[3];

			T18Scores[0] = P56();
			T18Scores[1] = P57();
			T18Scores[2] = P49();

			int best = bestProgram(T18Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T19: {
			const enum vertices next[4] = { T18, A22, T17, T13,  };

			double T19Scores[4];

			T19Scores[0] = P58();
			T19Scores[1] = P59();
			T19Scores[2] = P60();
			T19Scores[3] = P61();

			int best = bestProgram(T19Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A20: {
			return 0;
			break;
		}
		case A21: {
			return 1;
			break;
		}
		case A22: {
			return 2;
			break;
		}
		case A23: {
			return 3;
			break;
		}
		case A24: {
			return 4;
			break;
		}
		case A25: {
			return 5;
			break;
		}
		case A26: {
			return 6;
			break;
		}
		case A27: {
			return 7;
			break;
		}
		case A28: {
			return 8;
			break;
		}
		}
	}
}
