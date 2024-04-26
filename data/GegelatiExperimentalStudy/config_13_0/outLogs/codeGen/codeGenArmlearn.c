/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:07:05
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, A15, A16, A17, A18, A19, A20, };

int inferenceTPG() {
	enum vertices currentVertex = T14;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A15, A16,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { A17, A18, A15, A19,  };

			double T1Scores[4];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P5();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A19, A17, A18,  };

			double T2Scores[3];

			T2Scores[0] = P6();
			T2Scores[1] = P7();
			T2Scores[2] = P8();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[6] = { A19, A15, A15, A17, A16, A15,  };

			double T3Scores[6];

			T3Scores[0] = P5();
			T3Scores[1] = P9();
			T3Scores[2] = P10();
			T3Scores[3] = P11();
			T3Scores[4] = P1();
			T3Scores[5] = P12();

			int best = bestProgram(T3Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A17, A15, A20,  };

			double T4Scores[3];

			T4Scores[0] = P13();
			T4Scores[1] = P4();
			T4Scores[2] = P14();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { A20, T1, A17, A17, A18,  };

			double T5Scores[5];

			T5Scores[0] = P15();
			T5Scores[1] = P16();
			T5Scores[2] = P17();
			T5Scores[3] = P18();
			T5Scores[4] = P8();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T3, T1, A19,  };

			double T6Scores[3];

			T6Scores[0] = P19();
			T6Scores[1] = P20();
			T6Scores[2] = P5();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { T2, A17, T3, T1, A19, A16,  };

			double T7Scores[6];

			T7Scores[0] = P21();
			T7Scores[1] = P22();
			T7Scores[2] = P23();
			T7Scores[3] = P24();
			T7Scores[4] = P5();
			T7Scores[5] = P1();

			int best = bestProgram(T7Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T7, T2,  };

			double T8Scores[2];

			T8Scores[0] = P25();
			T8Scores[1] = P26();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[5] = { T5, T2, T6, T8, A15,  };

			double T9Scores[5];

			T9Scores[0] = P27();
			T9Scores[1] = P28();
			T9Scores[2] = P29();
			T9Scores[3] = P30();
			T9Scores[4] = P31();

			int best = bestProgram(T9Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { T5, T7, T4, T7, T2,  };

			double T10Scores[5];

			T10Scores[0] = P32();
			T10Scores[1] = P25();
			T10Scores[2] = P33();
			T10Scores[3] = P34();
			T10Scores[4] = P35();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[2] = { T10, T9,  };

			double T11Scores[2];

			T11Scores[0] = P36();
			T11Scores[1] = P37();

			int best = bestProgram(T11Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T10, T8, T9,  };

			double T12Scores[3];

			T12Scores[0] = P36();
			T12Scores[1] = P38();
			T12Scores[2] = P39();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[2] = { T12, T0,  };

			double T13Scores[2];

			T13Scores[0] = P40();
			T13Scores[1] = P41();

			int best = bestProgram(T13Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[3] = { A16, T13, T11,  };

			double T14Scores[3];

			T14Scores[0] = P42();
			T14Scores[1] = P43();
			T14Scores[2] = P44();

			int best = bestProgram(T14Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A15: {
			return 0;
			break;
		}
		case A16: {
			return 1;
			break;
		}
		case A17: {
			return 7;
			break;
		}
		case A18: {
			return 4;
			break;
		}
		case A19: {
			return 2;
			break;
		}
		case A20: {
			return 5;
			break;
		}
		}
	}
}
