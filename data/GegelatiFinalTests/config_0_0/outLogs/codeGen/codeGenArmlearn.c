/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-11 16:14:31
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

enum vertices {T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, A13, A14, A15, A16, A17, A18, A19, A20, };

int inferenceTPG() {
	enum vertices currentVertex = T12;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[3] = { A15, A18, A13,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[3] = { A13, T0, A16,  };

			double T1Scores[3];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();

			int best = bestProgram(T1Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { A13, T0, A16,  };

			double T2Scores[3];

			T2Scores[0] = P3();
			T2Scores[1] = P4();
			T2Scores[2] = P6();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[3] = { A16, T2, A19,  };

			double T3Scores[3];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();

			int best = bestProgram(T3Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T2, T3,  };

			double T4Scores[2];

			T4Scores[0] = P8();
			T4Scores[1] = P10();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[2] = { A19, T4,  };

			double T5Scores[2];

			T5Scores[0] = P11();
			T5Scores[1] = P12();

			int best = bestProgram(T5Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T6: {
			const enum vertices next[3] = { A20, T5, T3,  };

			double T6Scores[3];

			T6Scores[0] = P13();
			T6Scores[1] = P14();
			T6Scores[2] = P15();

			int best = bestProgram(T6Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T7: {
			const enum vertices next[5] = { A19, T5, T1, A18, A19,  };

			double T7Scores[5];

			T7Scores[0] = P16();
			T7Scores[1] = P14();
			T7Scores[2] = P17();
			T7Scores[3] = P18();
			T7Scores[4] = P19();

			int best = bestProgram(T7Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T8: {
			const enum vertices next[2] = { T7, A17,  };

			double T8Scores[2];

			T8Scores[0] = P20();
			T8Scores[1] = P21();

			int best = bestProgram(T8Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T9: {
			const enum vertices next[4] = { A18, T1, T8, A20,  };

			double T9Scores[4];

			T9Scores[0] = P18();
			T9Scores[1] = P22();
			T9Scores[2] = P23();
			T9Scores[3] = P24();

			int best = bestProgram(T9Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T10: {
			const enum vertices next[5] = { T9, A14, A18, T9, T6,  };

			double T10Scores[5];

			T10Scores[0] = P25();
			T10Scores[1] = P26();
			T10Scores[2] = P27();
			T10Scores[3] = P28();
			T10Scores[4] = P29();

			int best = bestProgram(T10Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T11: {
			const enum vertices next[4] = { A15, A14, A15, T10,  };

			double T11Scores[4];

			T11Scores[0] = P30();
			T11Scores[1] = P31();
			T11Scores[2] = P32();
			T11Scores[3] = P33();

			int best = bestProgram(T11Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T12: {
			const enum vertices next[5] = { A15, T11, A14, T8, A15,  };

			double T12Scores[5];

			T12Scores[0] = P34();
			T12Scores[1] = P35();
			T12Scores[2] = P36();
			T12Scores[3] = P37();
			T12Scores[4] = P38();

			int best = bestProgram(T12Scores, 5);
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
			return 4;
			break;
		}
		case A17: {
			return 5;
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
		case A20: {
			return 8;
			break;
		}
		}
	}
}
