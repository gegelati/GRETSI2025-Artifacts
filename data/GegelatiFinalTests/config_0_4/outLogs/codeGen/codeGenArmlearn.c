/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 14:05:47
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, A17, A18, A19, A20, A21, A22, A23, A24, A25, };

int inferenceTPG() {
	enum vertices currentVertex = T16;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A22, A17,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A24, A25,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A21, A24,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { T0, A21, T1,  };

			double T3Scores[3];

			T3Scores[0] = P6();
			T3Scores[1] = P7();
			T3Scores[2] = P8();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { T2, T3, T0,  };

			double T4Scores[3];

			T4Scores[0] = P9();
			T4Scores[1] = P10();
			T4Scores[2] = P11();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[6] = { T2, T3, T0, A21, A21, T4,  };

			double T5Scores[6];

			T5Scores[0] = P9();
			T5Scores[1] = P12();
			T5Scores[2] = P13();
			T5Scores[3] = P14();
			T5Scores[4] = P15();
			T5Scores[5] = P16();

			int best = bestProgram(T5Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { A17, T3,  };

			double T6Scores[2];

			T6Scores[0] = P17();
			T6Scores[1] = P18();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { T3, A20, A24,  };

			double T7Scores[3];

			T7Scores[0] = P18();
			T7Scores[1] = P19();
			T7Scores[2] = P20();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { T3, A24, A17, A19, T0,  };

			double T8Scores[5];

			T8Scores[0] = P18();
			T8Scores[1] = P21();
			T8Scores[2] = P17();
			T8Scores[3] = P22();
			T8Scores[4] = P13();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T5, T6,  };

			double T9Scores[2];

			T9Scores[0] = P23();
			T9Scores[1] = P24();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[6] = { A17, T3, A19, T5, A24, T0,  };

			double T10Scores[6];

			T10Scores[0] = P17();
			T10Scores[1] = P18();
			T10Scores[2] = P25();
			T10Scores[3] = P23();
			T10Scores[4] = P26();
			T10Scores[5] = P27();

			int best = bestProgram(T10Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T7, A17, T8,  };

			double T11Scores[3];

			T11Scores[0] = P28();
			T11Scores[1] = P29();
			T11Scores[2] = P30();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { A18, A19, A17,  };

			double T12Scores[3];

			T12Scores[0] = P31();
			T12Scores[1] = P32();
			T12Scores[2] = P33();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[5] = { A17, T7, T9, T12, T11,  };

			double T13Scores[5];

			T13Scores[0] = P34();
			T13Scores[1] = P35();
			T13Scores[2] = P36();
			T13Scores[3] = P37();
			T13Scores[4] = P38();

			int best = bestProgram(T13Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[5] = { A19, T13, T10, T7, A18,  };

			double T14Scores[5];

			T14Scores[0] = P39();
			T14Scores[1] = P40();
			T14Scores[2] = P41();
			T14Scores[3] = P42();
			T14Scores[4] = P43();

			int best = bestProgram(T14Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T10, T14,  };

			double T15Scores[2];

			T15Scores[0] = P44();
			T15Scores[1] = P45();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[4] = { A23, T15, A25, T14,  };

			double T16Scores[4];

			T16Scores[0] = P46();
			T16Scores[1] = P47();
			T16Scores[2] = P48();
			T16Scores[3] = P49();

			int best = bestProgram(T16Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A17: {
			return 0;
			break;
		}
		case A18: {
			return 1;
			break;
		}
		case A19: {
			return 2;
			break;
		}
		case A20: {
			return 3;
			break;
		}
		case A21: {
			return 4;
			break;
		}
		case A22: {
			return 5;
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
			return 8;
			break;
		}
		}
	}
}
