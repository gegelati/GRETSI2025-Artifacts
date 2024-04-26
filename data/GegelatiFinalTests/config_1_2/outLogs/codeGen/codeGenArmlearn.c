/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-17 17:25:43
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, A14, A15, A16, A17, A18, A19, A20, };

int inferenceTPG() {
	enum vertices currentVertex = T13;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A16, A17,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[2] = { A19, A20,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T1, A18,  };

			double T2Scores[2];

			T2Scores[0] = P4();
			T2Scores[1] = P5();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A20, T2, A14, A19, A14,  };

			double T3Scores[5];

			T3Scores[0] = P6();
			T3Scores[1] = P7();
			T3Scores[2] = P8();
			T3Scores[3] = P9();
			T3Scores[4] = P10();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { A14, T3,  };

			double T4Scores[2];

			T4Scores[0] = P11();
			T4Scores[1] = P12();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[5] = { A14, T4, A15, A15, T4,  };

			double T5Scores[5];

			T5Scores[0] = P13();
			T5Scores[1] = P14();
			T5Scores[2] = P15();
			T5Scores[3] = P16();
			T5Scores[4] = P17();

			int best = bestProgram(T5Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { T4, A15, T4,  };

			double T6Scores[3];

			T6Scores[0] = P18();
			T6Scores[1] = P15();
			T6Scores[2] = P17();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T6, T3,  };

			double T7Scores[2];

			T7Scores[0] = P19();
			T7Scores[1] = P20();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[5] = { T4, T5, A15, A14, A14,  };

			double T8Scores[5];

			T8Scores[0] = P17();
			T8Scores[1] = P21();
			T8Scores[2] = P22();
			T8Scores[3] = P23();
			T8Scores[4] = P24();

			int best = bestProgram(T8Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T8, A14,  };

			double T9Scores[2];

			T9Scores[0] = P25();
			T9Scores[1] = P26();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T8, A14,  };

			double T10Scores[2];

			T10Scores[0] = P25();
			T10Scores[1] = P26();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[3] = { T7, T10, T9,  };

			double T11Scores[3];

			T11Scores[0] = P27();
			T11Scores[1] = P28();
			T11Scores[2] = P29();

			int best = bestProgram(T11Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { A15, T11, A14, T0,  };

			double T12Scores[4];

			T12Scores[0] = P30();
			T12Scores[1] = P31();
			T12Scores[2] = P32();
			T12Scores[3] = P33();

			int best = bestProgram(T12Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T13: {
			const enum vertices next[4] = { A14, T0, A15, T12,  };

			double T13Scores[4];

			T13Scores[0] = P34();
			T13Scores[1] = P33();
			T13Scores[2] = P16();
			T13Scores[3] = P35();

			int best = bestProgram(T13Scores, 4);
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
			return 3;
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
		}
	}
}
