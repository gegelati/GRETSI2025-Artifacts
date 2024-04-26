/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:01:12
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, A11, A12, A13, A14, A15, A16, A17, A18, A19, };

int inferenceTPG() {
	enum vertices currentVertex = T10;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A14, A12,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A18, A19,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[6] = { A14, A12, A17, T1, A18, T0,  };

			double T2Scores[6];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();
			T2Scores[3] = P7();
			T2Scores[4] = P8();
			T2Scores[5] = P9();

			int best = bestProgram(T2Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A14, A12, A18,  };

			double T3Scores[3];

			T3Scores[0] = P10();
			T3Scores[1] = P11();
			T3Scores[2] = P12();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A14, T0, T1,  };

			double T4Scores[3];

			T4Scores[0] = P10();
			T4Scores[1] = P13();
			T4Scores[2] = P14();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { T2, T3, A18, A15, A12,  };

			double T5Scores[5];

			T5Scores[0] = P15();
			T5Scores[1] = P16();
			T5Scores[2] = P17();
			T5Scores[3] = P18();
			T5Scores[4] = P19();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[4] = { T4, A12, A18, A11,  };

			double T6Scores[4];

			T6Scores[0] = P20();
			T6Scores[1] = P21();
			T6Scores[2] = P22();
			T6Scores[3] = P23();

			int best = bestProgram(T6Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[7] = { A17, A16, T2, T4, A16, A15, A14,  };

			double T7Scores[7];

			T7Scores[0] = P24();
			T7Scores[1] = P25();
			T7Scores[2] = P26();
			T7Scores[3] = P27();
			T7Scores[4] = P28();
			T7Scores[5] = P29();
			T7Scores[6] = P10();

			int best = bestProgram(T7Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[3] = { T6, T5, T2,  };

			double T8Scores[3];

			T8Scores[0] = P30();
			T8Scores[1] = P31();
			T8Scores[2] = P32();

			int best = bestProgram(T8Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T6, T7,  };

			double T9Scores[2];

			T9Scores[0] = P33();
			T9Scores[1] = P34();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[8] = { A13, T6, T6, T9, T9, T8, A19, T9,  };

			double T10Scores[8];

			T10Scores[0] = P35();
			T10Scores[1] = P36();
			T10Scores[2] = P37();
			T10Scores[3] = P38();
			T10Scores[4] = P39();
			T10Scores[5] = P40();
			T10Scores[6] = P41();
			T10Scores[7] = P42();

			int best = bestProgram(T10Scores, 8);
			currentVertex = next[best];
			break;
		}
		case A11: {
			return 0;
			break;
		}
		case A12: {
			return 1;
			break;
		}
		case A13: {
			return 2;
			break;
		}
		case A14: {
			return 3;
			break;
		}
		case A15: {
			return 4;
			break;
		}
		case A16: {
			return 5;
			break;
		}
		case A17: {
			return 6;
			break;
		}
		case A18: {
			return 7;
			break;
		}
		case A19: {
			return 8;
			break;
		}
		}
	}
}
