/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:13:54
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, A13, A14, A15, A16, A17, A18, };

int inferenceTPG() {
	enum vertices currentVertex = T12;
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
			const enum vertices next[5] = { A15, A17, A18, A17, A13,  };

			double T1Scores[5];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P5();
			T1Scores[4] = P6();

			int best = bestProgram(T1Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A15, A13, A16,  };

			double T2Scores[3];

			T2Scores[0] = P7();
			T2Scores[1] = P8();
			T2Scores[2] = P9();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T1, A17,  };

			double T3Scores[2];

			T3Scores[0] = P10();
			T3Scores[1] = P3();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[4] = { A16, T3, A16, A18,  };

			double T4Scores[4];

			T4Scores[0] = P0();
			T4Scores[1] = P11();
			T4Scores[2] = P12();
			T4Scores[3] = P13();

			int best = bestProgram(T4Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { T2, T0,  };

			double T5Scores[2];

			T5Scores[0] = P14();
			T5Scores[1] = P15();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[2] = { A13, A15,  };

			double T6Scores[2];

			T6Scores[0] = P16();
			T6Scores[1] = P17();

			int best = bestProgram(T6Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[2] = { T4, T1,  };

			double T7Scores[2];

			T7Scores[0] = P18();
			T7Scores[1] = P19();

			int best = bestProgram(T7Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[4] = { T5, T2, T6, A17,  };

			double T8Scores[4];

			T8Scores[0] = P20();
			T8Scores[1] = P21();
			T8Scores[2] = P22();
			T8Scores[3] = P23();

			int best = bestProgram(T8Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[2] = { T4, T8,  };

			double T9Scores[2];

			T9Scores[0] = P24();
			T9Scores[1] = P25();

			int best = bestProgram(T9Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[2] = { T7, T1,  };

			double T10Scores[2];

			T10Scores[0] = P26();
			T10Scores[1] = P27();

			int best = bestProgram(T10Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { T9, T10, A14, T7,  };

			double T11Scores[4];

			T11Scores[0] = P28();
			T11Scores[1] = P29();
			T11Scores[2] = P30();
			T11Scores[3] = P31();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[4] = { T7, T11, A14, T8,  };

			double T12Scores[4];

			T12Scores[0] = P32();
			T12Scores[1] = P33();
			T12Scores[2] = P34();
			T12Scores[3] = P35();

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
			return 4;
			break;
		}
		case A16: {
			return 5;
			break;
		}
		case A17: {
			return 7;
			break;
		}
		case A18: {
			return 8;
			break;
		}
		}
	}
}
