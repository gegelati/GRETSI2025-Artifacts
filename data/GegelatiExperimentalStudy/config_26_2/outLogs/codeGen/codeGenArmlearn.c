/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:00:09
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

enum vertices {T0, A1, A2, A3, A4, A5, };

int inferenceTPG() {
	enum vertices currentVertex = T0;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[7] = { A1, A3, A2, A4, A2, A1, A5,  };

			double T0Scores[7];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();
			T0Scores[4] = P4();
			T0Scores[5] = P5();
			T0Scores[6] = P6();

			int best = bestProgram(T0Scores, 7);
			currentVertex = next[best];
			break;
		}
		case A1: {
			return 6;
			break;
		}
		case A2: {
			return 0;
			break;
		}
		case A3: {
			return 3;
			break;
		}
		case A4: {
			return 4;
			break;
		}
		case A5: {
			return 1;
			break;
		}
		}
	}
}
