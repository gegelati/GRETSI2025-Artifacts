/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:01:51
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

enum vertices {T0, T1, A2, A3, A4, A5, };

int inferenceTPG() {
	enum vertices currentVertex = T1;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[2] = { A2, A3,  };

			double T0Scores[2];

			T0Scores[0] = P0();
			T0Scores[1] = P1();

			int best = bestProgram(T0Scores, 2);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[4] = { T0, A4, A2, A5,  };

			double T1Scores[4];

			T1Scores[0] = P2();
			T1Scores[1] = P3();
			T1Scores[2] = P4();
			T1Scores[3] = P5();

			int best = bestProgram(T1Scores, 4);
			currentVertex = next[best];
			break;
		}
		case A2: {
			return 7;
			break;
		}
		case A3: {
			return 4;
			break;
		}
		case A4: {
			return 2;
			break;
		}
		case A5: {
			return 1;
			break;
		}
		}
	}
}
