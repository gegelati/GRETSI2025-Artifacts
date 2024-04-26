/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-17 17:26:23
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, A17, A18, A19, A20, A21, A22, };

int inferenceTPG() {
	enum vertices currentVertex = T16;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A19, A22,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { T0, A18, A22,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P1();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A19, A18, A20,  };

			double T2Scores[3];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { A18, T1, A20, A20,  };

			double T3Scores[4];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A20, T1, A20,  };

			double T4Scores[3];

			T4Scores[0] = P10();
			T4Scores[1] = P11();
			T4Scores[2] = P9();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { A18, A20, A21, T1, A20,  };

			double T5Scores[5];

			T5Scores[0] = P7();
			T5Scores[1] = P12();
			T5Scores[2] = P13();
			T5Scores[3] = P14();
			T5Scores[4] = P10();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[5] = { A20, A18, T3, A21, A20,  };

			double T6Scores[5];

			T6Scores[0] = P15();
			T6Scores[1] = P16();
			T6Scores[2] = P17();
			T6Scores[3] = P13();
			T6Scores[4] = P10();

			int best = bestProgram(T6Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T3, T2,  };

			double T7Scores[2];

			T7Scores[0] = P18();
			T7Scores[1] = P19();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[9] = { T1, A18, T3, A21, T5, A18, T2, T1, A20,  };

			double T8Scores[9];

			T8Scores[0] = P20();
			T8Scores[1] = P16();
			T8Scores[2] = P21();
			T8Scores[3] = P13();
			T8Scores[4] = P22();
			T8Scores[5] = P23();
			T8Scores[6] = P19();
			T8Scores[7] = P24();
			T8Scores[8] = P25();

			int best = bestProgram(T8Scores, 9);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T6, T7, A18,  };

			double T9Scores[3];

			T9Scores[0] = P26();
			T9Scores[1] = P27();
			T9Scores[2] = P28();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { A21, T6, T7,  };

			double T10Scores[3];

			T10Scores[0] = P29();
			T10Scores[1] = P26();
			T10Scores[2] = P27();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { A21, T6, T7, T8,  };

			double T11Scores[4];

			T11Scores[0] = P29();
			T11Scores[1] = P30();
			T11Scores[2] = P27();
			T11Scores[3] = P31();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[2] = { T4, T10,  };

			double T12Scores[2];

			T12Scores[0] = P32();
			T12Scores[1] = P33();

			int best = bestProgram(T12Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { A18, A17, T12,  };

			double T13Scores[3];

			T13Scores[0] = P16();
			T13Scores[1] = P34();
			T13Scores[2] = P35();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[4] = { T8, T3, T9, T13,  };

			double T14Scores[4];

			T14Scores[0] = P36();
			T14Scores[1] = P37();
			T14Scores[2] = P38();
			T14Scores[3] = P39();

			int best = bestProgram(T14Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[2] = { T11, A18,  };

			double T15Scores[2];

			T15Scores[0] = P40();
			T15Scores[1] = P41();

			int best = bestProgram(T15Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T16: {
			const enum vertices next[6] = { T15, T8, T14, A17, A18, T2,  };

			double T16Scores[6];

			T16Scores[0] = P42();
			T16Scores[1] = P43();
			T16Scores[2] = P44();
			T16Scores[3] = P45();
			T16Scores[4] = P16();
			T16Scores[5] = P46();

			int best = bestProgram(T16Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A17: {
			return 1;
			break;
		}
		case A18: {
			return 4;
			break;
		}
		case A19: {
			return 5;
			break;
		}
		case A20: {
			return 6;
			break;
		}
		case A21: {
			return 7;
			break;
		}
		case A22: {
			return 0;
			break;
		}
		}
	}
}
