/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:00:09
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, A15, A16, A17, A18, A19, A20, A21, };

int inferenceTPG() {
	enum vertices currentVertex = T14;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A20, A21,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A18, A15,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[6] = { A17, A19, A17, A18, A20, T0,  };

			double T2Scores[6];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();
			T2Scores[3] = P2();
			T2Scores[4] = P7();
			T2Scores[5] = P8();

			int best = bestProgram(T2Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A15, A19, A17, A15, A18,  };

			double T3Scores[5];

			T3Scores[0] = P9();
			T3Scores[1] = P10();
			T3Scores[2] = P11();
			T3Scores[3] = P12();
			T3Scores[4] = P13();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { A17, A20, A18, A17,  };

			double T4Scores[4];

			T4Scores[0] = P14();
			T4Scores[1] = P15();
			T4Scores[2] = P16();
			T4Scores[3] = P17();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[4] = { T3, T2, T3, T0,  };

			double T5Scores[4];

			T5Scores[0] = P18();
			T5Scores[1] = P19();
			T5Scores[2] = P20();
			T5Scores[3] = P21();

			int best = bestProgram(T5Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T3, T2, T2,  };

			double T6Scores[3];

			T6Scores[0] = P22();
			T6Scores[1] = P23();
			T6Scores[2] = P19();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T6, A19,  };

			double T7Scores[2];

			T7Scores[0] = P24();
			T7Scores[1] = P25();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T1, T3,  };

			double T8Scores[2];

			T8Scores[0] = P26();
			T8Scores[1] = P27();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T2, T8, A19,  };

			double T9Scores[3];

			T9Scores[0] = P28();
			T9Scores[1] = P29();
			T9Scores[2] = P30();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T9, A16,  };

			double T10Scores[2];

			T10Scores[0] = P31();
			T10Scores[1] = P32();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T10, T7, A18,  };

			double T11Scores[3];

			T11Scores[0] = P33();
			T11Scores[1] = P34();
			T11Scores[2] = P35();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { A16, T4, T11,  };

			double T12Scores[3];

			T12Scores[0] = P32();
			T12Scores[1] = P36();
			T12Scores[2] = P37();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { T4, T10, A19,  };

			double T13Scores[3];

			T13Scores[0] = P38();
			T13Scores[1] = P39();
			T13Scores[2] = P40();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { T13, T5, T12,  };

			double T14Scores[3];

			T14Scores[0] = P41();
			T14Scores[1] = P42();
			T14Scores[2] = P43();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A15: {
			return 0;
			break;
		}
		case A16: {
			return 2;
			break;
		}
		case A17: {
			return 4;
			break;
		}
		case A18: {
			return 5;
			break;
		}
		case A19: {
			return 6;
			break;
		}
		case A20: {
			return 7;
			break;
		}
		case A21: {
			return 8;
			break;
		}
		}
	}
}
