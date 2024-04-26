/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:03:10
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, A13, A14, A15, A16, A17, A18, A19, };

int inferenceTPG() {
	enum vertices currentVertex = T12;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A18, A19,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A19, A17, A16,  };

			double T1Scores[3];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A17, A15,  };

			double T2Scores[2];

			T2Scores[0] = P5();
			T2Scores[1] = P6();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { T1, A15, A18,  };

			double T3Scores[3];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[3] = { A15, A13, A17,  };

			double T4Scores[3];

			T4Scores[0] = P10();
			T4Scores[1] = P11();
			T4Scores[2] = P12();

			int best = bestProgram(T4Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { T3, A15, A13, A17, A15,  };

			double T5Scores[5];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();
			T5Scores[3] = P16();
			T5Scores[4] = P6();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T3, T5, A19,  };

			double T6Scores[3];

			T6Scores[0] = P17();
			T6Scores[1] = P18();
			T6Scores[2] = P19();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[4] = { T4, T2, T3, A16,  };

			double T7Scores[4];

			T7Scores[0] = P20();
			T7Scores[1] = P21();
			T7Scores[2] = P22();
			T7Scores[3] = P23();

			int best = bestProgram(T7Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T4, A14, T3, A15,  };

			double T8Scores[4];

			T8Scores[0] = P24();
			T8Scores[1] = P25();
			T8Scores[2] = P17();
			T8Scores[3] = P26();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[3] = { T3, T3, A15,  };

			double T9Scores[3];

			T9Scores[0] = P17();
			T9Scores[1] = P27();
			T9Scores[2] = P28();

			int best = bestProgram(T9Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[4] = { A15, T6, A14, T3,  };

			double T10Scores[4];

			T10Scores[0] = P6();
			T10Scores[1] = P29();
			T10Scores[2] = P30();
			T10Scores[3] = P31();

			int best = bestProgram(T10Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[7] = { A19, A15, T7, A18, T0, T9, T8,  };

			double T11Scores[7];

			T11Scores[0] = P32();
			T11Scores[1] = P6();
			T11Scores[2] = P33();
			T11Scores[3] = P34();
			T11Scores[4] = P35();
			T11Scores[5] = P36();
			T11Scores[6] = P37();

			int best = bestProgram(T11Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { T3, A15, T10, T11,  };

			double T12Scores[4];

			T12Scores[0] = P38();
			T12Scores[1] = P39();
			T12Scores[2] = P40();
			T12Scores[3] = P41();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A13: {
			return 0;
			break;
		}
		case A14: {
			return 1;
			break;
		}
		case A15: {
			return 2;
			break;
		}
		case A16: {
			return 3;
			break;
		}
		case A17: {
			return 4;
			break;
		}
		case A18: {
			return 6;
			break;
		}
		case A19: {
			return 7;
			break;
		}
		}
	}
}
