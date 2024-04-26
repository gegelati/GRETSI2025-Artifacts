/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:10:36
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

enum vertices {T0, T1, A2, A3, A4, A5, A6, };

int inferenceTPG() {
	enum vertices currentVertex = T1;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A3, A6, A2, A6,  };

			double T0Scores[4];

			T0Scores[0] = P0();
			T0Scores[1] = P1();
			T0Scores[2] = P2();
			T0Scores[3] = P3();

			int best = bestProgram(T0Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T1: {
			const enum vertices next[6] = { A5, A6, T0, A2, T0, A4,  };

			double T1Scores[6];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P6();
			T1Scores[3] = P7();
			T1Scores[4] = P8();
			T1Scores[5] = P9();

			int best = bestProgram(T1Scores, 6);
			currentVertex = next[best];
			break;
		}
		case A2: {
			return 0;
			break;
		}
		case A3: {
			return 4;
			break;
		}
		case A4: {
			return 5;
			break;
		}
		case A5: {
			return 7;
			break;
		}
		case A6: {
			return 6;
			break;
		}
		}
	}
}
