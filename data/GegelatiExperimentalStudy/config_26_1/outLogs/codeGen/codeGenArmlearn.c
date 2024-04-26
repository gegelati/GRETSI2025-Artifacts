/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:00:07
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
			const enum vertices next[3] = { A8, A9, A7,  };

			double T0Scores[3];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();

			int best = bestProgram(T0Scores, 3);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[6] = { A11, A10, A4, A4, A4, A5,  };

			double T1Scores[6];

			T1Scores[0] = P3();
			T1Scores[1] = P4();
			T1Scores[2] = P5();
			T1Scores[3] = P6();
			T1Scores[4] = P7();
			T1Scores[5] = P8();

			int best = bestProgram(T1Scores, 6);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[2] = { A11, A7,  };

			double T2Scores[2];

			T2Scores[0] = P9();
			T2Scores[1] = P10();

			int best = bestProgram(T2Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[4] = { T2, A6, T1, T0,  };

			double T3Scores[4];

			T3Scores[0] = P11();
			T3Scores[1] = P12();
			T3Scores[2] = P13();
			T3Scores[3] = P14();

			int best = bestProgram(T3Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A4: {
			return 1;
			break;
		}
		case A5: {
			return 2;
			break;
		}
		case A6: {
			return 3;
			break;
		}
		case A7: {
			return 4;
			break;
		}
		case A8: {
			return 6;
			break;
		}
		case A9: {
			return 7;
			break;
		}
		case A10: {
			return 8;
			break;
		}
		case A11: {
			return 0;
			break;
		}
		}
	}
}
