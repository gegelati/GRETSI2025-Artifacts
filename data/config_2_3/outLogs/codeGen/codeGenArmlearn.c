/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:00:48
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, A14, A15, A16, A17, A18, A19, A20, A21, };

int inferenceTPG() {
	enum vertices currentVertex = T13;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[6] = { A19, A17, A14, A19, A19, A18,  };

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
			const enum vertices next[2] = { A18, T0,  };

			double T1Scores[2];

			T1Scores[0] = P5();
			T1Scores[1] = P6();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A21, A19, A18,  };

			double T2Scores[3];

			T2Scores[0] = P7();
			T2Scores[1] = P8();
			T2Scores[2] = P5();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[6] = { A18, T2, A14, A20, A14, T1,  };

			double T3Scores[6];

			T3Scores[0] = P9();
			T3Scores[1] = P10();
			T3Scores[2] = P11();
			T3Scores[3] = P12();
			T3Scores[4] = P13();
			T3Scores[5] = P14();

			int best = bestProgram(T3Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { T3, A21, T0, A14,  };

			double T4Scores[4];

			T4Scores[0] = P15();
			T4Scores[1] = P16();
			T4Scores[2] = P17();
			T4Scores[3] = P18();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[7] = { T4, T3, T3, A14, A16, A14, A21,  };

			double T5Scores[7];

			T5Scores[0] = P19();
			T5Scores[1] = P20();
			T5Scores[2] = P21();
			T5Scores[3] = P22();
			T5Scores[4] = P23();
			T5Scores[5] = P18();
			T5Scores[6] = P16();

			int best = bestProgram(T5Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[6] = { T3, A18, A14, T4, A14, A21,  };

			double T6Scores[6];

			T6Scores[0] = P24();
			T6Scores[1] = P25();
			T6Scores[2] = P18();
			T6Scores[3] = P26();
			T6Scores[4] = P27();
			T6Scores[5] = P16();

			int best = bestProgram(T6Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[6] = { T3, A21, A18, T5, A14, A20,  };

			double T7Scores[6];

			T7Scores[0] = P28();
			T7Scores[1] = P16();
			T7Scores[2] = P29();
			T7Scores[3] = P30();
			T7Scores[4] = P31();
			T7Scores[5] = P32();

			int best = bestProgram(T7Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[6] = { T7, T6, A15, T4, T4, T1,  };

			double T8Scores[6];

			T8Scores[0] = P33();
			T8Scores[1] = P34();
			T8Scores[2] = P35();
			T8Scores[3] = P36();
			T8Scores[4] = P37();
			T8Scores[5] = P38();

			int best = bestProgram(T8Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[7] = { T7, A15, T4, A20, A20, T6, A15,  };

			double T9Scores[7];

			T9Scores[0] = P33();
			T9Scores[1] = P39();
			T9Scores[2] = P40();
			T9Scores[3] = P41();
			T9Scores[4] = P42();
			T9Scores[5] = P34();
			T9Scores[6] = P43();

			int best = bestProgram(T9Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[3] = { T6, A15, T9,  };

			double T10Scores[3];

			T10Scores[0] = P34();
			T10Scores[1] = P44();
			T10Scores[2] = P45();

			int best = bestProgram(T10Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T4, T6, T8, T10,  };

			double T11Scores[4];

			T11Scores[0] = P46();
			T11Scores[1] = P47();
			T11Scores[2] = P48();
			T11Scores[3] = P49();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[3] = { T11, T10, T8,  };

			double T12Scores[3];

			T12Scores[0] = P50();
			T12Scores[1] = P49();
			T12Scores[2] = P48();

			int best = bestProgram(T12Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[3] = { T10, T12, T8,  };

			double T13Scores[3];

			T13Scores[0] = P51();
			T13Scores[1] = P52();
			T13Scores[2] = P53();

			int best = bestProgram(T13Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A14: {
			return 0;
			break;
		}
		case A15: {
			return 1;
			break;
		}
		case A16: {
			return 2;
			break;
		}
		case A17: {
			return 8;
			break;
		}
		case A18: {
			return 5;
			break;
		}
		case A19: {
			return 7;
			break;
		}
		case A20: {
			return 6;
			break;
		}
		case A21: {
			return 4;
			break;
		}
		}
	}
}
