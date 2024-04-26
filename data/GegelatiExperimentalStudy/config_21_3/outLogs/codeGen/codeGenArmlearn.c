/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:12:22
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

enum vertices {T0, T1, T2, T3, T4, T5, A6, A7, A8, A9, A10, A11, A12, };

int inferenceTPG() {
	enum vertices currentVertex = T5;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A8, A9,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[6] = { A6, A9, A10, A11, A11, A9,  };

			double T1Scores[6];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P5();
			T1Scores[4] = P6();
			T1Scores[5] = P7();

			int best = bestProgram(T1Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { T1, A12,  };

			double T2Scores[2];

			T2Scores[0] = P8();
			T2Scores[1] = P9();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T1, T0,  };

			double T3Scores[2];

			T3Scores[0] = P10();
			T3Scores[1] = P11();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T4: {
			const enum vertices next[2] = { T2, T3,  };

			double T4Scores[2];

			T4Scores[0] = P12();
			T4Scores[1] = P13();

			int best = bestProgram(T4Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T5: {
			const enum vertices next[3] = { T4, T3, A7,  };

			double T5Scores[3];

			T5Scores[0] = P14();
			T5Scores[1] = P15();
			T5Scores[2] = P16();

			int best = bestProgram(T5Scores, 3);
			currentVertex = next[best];
			break;
		}
		case A6: {
			return 1;
			break;
		}
		case A7: {
			return 2;
			break;
		}
		case A8: {
			return 3;
			break;
		}
		case A9: {
			return 4;
			break;
		}
		case A10: {
			return 5;
			break;
		}
		case A11: {
			return 7;
			break;
		}
		case A12: {
			return 0;
			break;
		}
		}
	}
}
