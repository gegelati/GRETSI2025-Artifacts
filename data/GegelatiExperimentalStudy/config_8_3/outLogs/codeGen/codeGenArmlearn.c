/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:04:40
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
			const enum vertices next[6] = { A19, A20, A21, A16, A22, A19,  };

			double T0Scores[6];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();
			T0Scores[4] = P4();
			T0Scores[5] = P5();

			int best = bestProgram(T0Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A19, A20,  };

			double T1Scores[2];

			T1Scores[0] = P6();
			T1Scores[1] = P7();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A17, T0, A16,  };

			double T2Scores[3];

			T2Scores[0] = P8();
			T2Scores[1] = P9();
			T2Scores[2] = P3();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T1, A16,  };

			double T3Scores[2];

			T3Scores[0] = P10();
			T3Scores[1] = P3();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[7] = { A19, A22, A17, A20, A16, A17, T2,  };

			double T4Scores[7];

			T4Scores[0] = P5();
			T4Scores[1] = P11();
			T4Scores[2] = P12();
			T4Scores[3] = P13();
			T4Scores[4] = P14();
			T4Scores[5] = P8();
			T4Scores[6] = P15();

			int best = bestProgram(T4Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A16, T4,  };

			double T5Scores[2];

			T5Scores[0] = P16();
			T5Scores[1] = P17();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { T5, A22,  };

			double T6Scores[2];

			T6Scores[0] = P18();
			T6Scores[1] = P11();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T5, T6, T5, A20,  };

			double T7Scores[4];

			T7Scores[0] = P19();
			T7Scores[1] = P20();
			T7Scores[2] = P21();
			T7Scores[3] = P13();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T5, T5, T3, A17,  };

			double T8Scores[4];

			T8Scores[0] = P19();
			T8Scores[1] = P22();
			T8Scores[2] = P23();
			T8Scores[3] = P12();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T7, A20, T8,  };

			double T9Scores[3];

			T9Scores[0] = P24();
			T9Scores[1] = P13();
			T9Scores[2] = P25();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { T3, A17, T6, T5, T5,  };

			double T10Scores[5];

			T10Scores[0] = P26();
			T10Scores[1] = P12();
			T10Scores[2] = P27();
			T10Scores[3] = P28();
			T10Scores[4] = P29();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T5, T6, A17,  };

			double T11Scores[3];

			T11Scores[0] = P30();
			T11Scores[1] = P31();
			T11Scores[2] = P12();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[6] = { T5, T9, T6, A17, T10, T5,  };

			double T12Scores[6];

			T12Scores[0] = P32();
			T12Scores[1] = P33();
			T12Scores[2] = P34();
			T12Scores[3] = P12();
			T12Scores[4] = P35();
			T12Scores[5] = P36();

			int best = bestProgram(T12Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { T11, T9, T5, T8,  };

			double T13Scores[4];

			T13Scores[0] = P37();
			T13Scores[1] = P38();
			T13Scores[2] = P39();
			T13Scores[3] = P40();

			int best = bestProgram(T13Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T14: {
			const enum vertices next[2] = { A17, T9,  };

			double T14Scores[2];

			T14Scores[0] = P41();
			T14Scores[1] = P42();

			int best = bestProgram(T14Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T15: {
			const enum vertices next[5] = { A18, T13, T5, T12, T14,  };

			double T15Scores[5];

			T15Scores[0] = P43();
			T15Scores[1] = P44();
			T15Scores[2] = P45();
			T15Scores[3] = P46();
			T15Scores[4] = P47();

			int best = bestProgram(T15Scores, 5);
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
			return 4;
			break;
		}
		case A20: {
			return 5;
			break;
		}
		case A21: {
			return 6;
			break;
		}
		case A22: {
			return 7;
			break;
		}
		}
	}
}
