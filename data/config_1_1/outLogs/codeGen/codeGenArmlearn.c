/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 15:59:51
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, A16, A17, A18, A19, A20, A21, A22, };

int inferenceTPG() {
	enum vertices currentVertex = T15;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A22, A20,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[5] = { A21, A20, A22, A20, A17,  };

			double T1Scores[5];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P1();
			T1Scores[4] = P5();

			int best = bestProgram(T1Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A20, A20, A22, A21, A16,  };

			double T2Scores[5];

			T2Scores[0] = P1();
			T2Scores[1] = P6();
			T2Scores[2] = P0();
			T2Scores[3] = P7();
			T2Scores[4] = P8();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[6] = { A22, A16, A20, A20, A21, A17,  };

			double T3Scores[6];

			T3Scores[0] = P9();
			T3Scores[1] = P10();
			T3Scores[2] = P11();
			T3Scores[3] = P3();
			T3Scores[4] = P7();
			T3Scores[5] = P12();

			int best = bestProgram(T3Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A18, T3,  };

			double T4Scores[2];

			T4Scores[0] = P13();
			T4Scores[1] = P14();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T2, T3, A18,  };

			double T5Scores[3];

			T5Scores[0] = P15();
			T5Scores[1] = P16();
			T5Scores[2] = P17();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T3, A18,  };

			double T6Scores[2];

			T6Scores[0] = P16();
			T6Scores[1] = P17();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T5, T2,  };

			double T7Scores[2];

			T7Scores[0] = P18();
			T7Scores[1] = P19();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[6] = { T4, A22, T1, T3, T4, A20,  };

			double T8Scores[6];

			T8Scores[0] = P20();
			T8Scores[1] = P21();
			T8Scores[2] = P22();
			T8Scores[3] = P23();
			T8Scores[4] = P24();
			T8Scores[5] = P25();

			int best = bestProgram(T8Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { T5, A16, T6, T1,  };

			double T9Scores[4];

			T9Scores[0] = P26();
			T9Scores[1] = P27();
			T9Scores[2] = P28();
			T9Scores[3] = P22();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[4] = { T9, T1, A21, T0,  };

			double T10Scores[4];

			T10Scores[0] = P29();
			T10Scores[1] = P22();
			T10Scores[2] = P2();
			T10Scores[3] = P30();

			int best = bestProgram(T10Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T10, T8, T1,  };

			double T11Scores[3];

			T11Scores[0] = P31();
			T11Scores[1] = P32();
			T11Scores[2] = P22();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T10, T1, T8,  };

			double T12Scores[3];

			T12Scores[0] = P33();
			T12Scores[1] = P34();
			T12Scores[2] = P35();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[6] = { T9, T1, T10, T8, T7, A22,  };

			double T13Scores[6];

			T13Scores[0] = P36();
			T13Scores[1] = P37();
			T13Scores[2] = P38();
			T13Scores[3] = P39();
			T13Scores[4] = P40();
			T13Scores[5] = P41();

			int best = bestProgram(T13Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[6] = { T13, T12, T8, T11, T10, A19,  };

			double T14Scores[6];

			T14Scores[0] = P42();
			T14Scores[1] = P43();
			T14Scores[2] = P44();
			T14Scores[3] = P45();
			T14Scores[4] = P46();
			T14Scores[5] = P47();

			int best = bestProgram(T14Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[7] = { T10, T12, T10, T11, T14, A20, T13,  };

			double T15Scores[7];

			T15Scores[0] = P48();
			T15Scores[1] = P49();
			T15Scores[2] = P50();
			T15Scores[3] = P51();
			T15Scores[4] = P52();
			T15Scores[5] = P53();
			T15Scores[6] = P42();

			int best = bestProgram(T15Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A16: {
			return 0;
			break;
		}
		case A17: {
			return 1;
			break;
		}
		case A18: {
			return 2;
			break;
		}
		case A19: {
			return 3;
			break;
		}
		case A20: {
			return 4;
			break;
		}
		case A21: {
			return 5;
			break;
		}
		case A22: {
			return 7;
			break;
		}
		}
	}
}
