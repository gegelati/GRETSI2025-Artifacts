/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-17 17:25:25
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, T18, A19, A20, A21, A22, A23, };

int inferenceTPG() {
	enum vertices currentVertex = T18;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A22, A23,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A21, A23, A22,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P1();
			T1Scores[2] = P3();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T1, A21,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A23, T1, A21, T0,  };

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
			const enum vertices next[3] = { T2, T0, A22,  };

			double T4Scores[3];

			T4Scores[0] = P10();
			T4Scores[1] = P11();
			T4Scores[2] = P12();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { A19, T3, A22,  };

			double T5Scores[3];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T3, A23, A22,  };

			double T6Scores[3];

			T6Scores[0] = P16();
			T6Scores[1] = P17();
			T6Scores[2] = P18();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[3] = { A23, A21, T5,  };

			double T7Scores[3];

			T7Scores[0] = P19();
			T7Scores[1] = P20();
			T7Scores[2] = P21();

			int best = bestProgram(T7Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { A21, T4, A20, T5,  };

			double T8Scores[4];

			T8Scores[0] = P20();
			T8Scores[1] = P22();
			T8Scores[2] = P23();
			T8Scores[3] = P21();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { A20, T6, A23,  };

			double T9Scores[3];

			T9Scores[0] = P24();
			T9Scores[1] = P25();
			T9Scores[2] = P6();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T7, T9,  };

			double T10Scores[2];

			T10Scores[0] = P26();
			T10Scores[1] = P27();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T4, A21,  };

			double T11Scores[2];

			T11Scores[0] = P28();
			T11Scores[1] = P29();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { A23, T4, T9, A21,  };

			double T12Scores[4];

			T12Scores[0] = P30();
			T12Scores[1] = P31();
			T12Scores[2] = P27();
			T12Scores[3] = P20();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { T1, A20, T9, A21,  };

			double T13Scores[4];

			T13Scores[0] = P32();
			T13Scores[1] = P33();
			T13Scores[2] = P27();
			T13Scores[3] = P34();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { A22, T11, T10,  };

			double T14Scores[3];

			T14Scores[0] = P35();
			T14Scores[1] = P36();
			T14Scores[2] = P37();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T11, T12,  };

			double T15Scores[2];

			T15Scores[0] = P38();
			T15Scores[1] = P39();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[2] = { T8, T15,  };

			double T16Scores[2];

			T16Scores[0] = P40();
			T16Scores[1] = P41();

			int best = bestProgram(T16Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T17: {
			const enum vertices next[6] = { A19, A20, T1, A22, T14, T16,  };

			double T17Scores[6];

			T17Scores[0] = P42();
			T17Scores[1] = P43();
			T17Scores[2] = P44();
			T17Scores[3] = P45();
			T17Scores[4] = P46();
			T17Scores[5] = P47();

			int best = bestProgram(T17Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T18: {
			const enum vertices next[3] = { T13, T9, T17,  };

			double T18Scores[3];

			T18Scores[0] = P48();
			T18Scores[1] = P49();
			T18Scores[2] = P50();

			int best = bestProgram(T18Scores, 3);
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
		}
	}
}
