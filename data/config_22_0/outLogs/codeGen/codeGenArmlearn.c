/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:12:36
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

enum vertices {T0, T1, T2, T3, A4, A5, A6, A7, };

int inferenceTPG() {
	enum vertices currentVertex = T3;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[5] = { A4, A5, A5, A6, A7,  };

			double T0Scores[5];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();
			T0Scores[4] = P4();

			int best = bestProgram(T0Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { A4, A6, A5, A7,  };

			double T1Scores[4];

			T1Scores[0] = P5();
			T1Scores[1] = P6();
			T1Scores[2] = P7();
			T1Scores[3] = P8();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[5] = { A5, A6, T1, A5, A7,  };

			double T2Scores[5];

			T2Scores[0] = P9();
			T2Scores[1] = P10();
			T2Scores[2] = P11();
			T2Scores[3] = P12();
			T2Scores[4] = P13();

			int best = bestProgram(T2Scores, 5);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[2] = { T2, T0,  };

			double T3Scores[2];

			T3Scores[0] = P14();
			T3Scores[1] = P15();

			int best = bestProgram(T3Scores, 2);
			currentVertex = next[best];
			break;
		}
		case A4: {
			return 0;
			break;
		}
		case A5: {
			return 4;
			break;
		}
		case A6: {
			return 5;
			break;
		}
		case A7: {
			return 7;
			break;
		}
		}
	}
}
