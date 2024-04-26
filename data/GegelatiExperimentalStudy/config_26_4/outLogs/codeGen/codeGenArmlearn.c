/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:00:18
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

enum vertices {T0, T1, T2, T3, A4, A5, A6, A7, A8, A9, A10, A11, };

int inferenceTPG() {
	enum vertices currentVertex = T3;
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
			const enum vertices next[2] = { A4, A7,  };

			double T1Scores[2];

			T1Scores[0] = P2();
			T1Scores[1] = P3();

			int best = bestProgram(T1Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[3] = { T0, A11, T1,  };

			double T2Scores[3];

			T2Scores[0] = P4();
			T2Scores[1] = P5();
			T2Scores[2] = P6();

			int best = bestProgram(T2Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { A7, T2, A6, A10, A5,  };

			double T3Scores[5];

			T3Scores[0] = P7();
			T3Scores[1] = P8();
			T3Scores[2] = P9();
			T3Scores[3] = P10();
			T3Scores[4] = P11();

			int best = bestProgram(T3Scores, 5);
			currentVertex = next[best];
			break;
		}
		case A4: {
			return 0;
			break;
		}
		case A5: {
			return 1;
			break;
		}
		case A6: {
			return 2;
			break;
		}
		case A7: {
			return 4;
			break;
		}
		case A8: {
			return 7;
			break;
		}
		case A9: {
			return 8;
			break;
		}
		case A10: {
			return 5;
			break;
		}
		case A11: {
			return 6;
			break;
		}
		}
	}
}
