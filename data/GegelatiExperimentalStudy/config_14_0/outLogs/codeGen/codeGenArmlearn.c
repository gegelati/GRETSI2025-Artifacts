/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:07:38
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

enum vertices {T0, T1, T2, T3, A4, A5, A6, A7, A8, A9, };

int inferenceTPG() {
	enum vertices currentVertex = T3;
	while(1) {
		switch (currentVertex) {
		case T0: {
			const enum vertices next[4] = { A7, A4, A5, A6,  };

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
			const enum vertices next[7] = { A8, A9, A4, T0, A8, A6, A4,  };

			double T1Scores[7];

			T1Scores[0] = P4();
			T1Scores[1] = P5();
			T1Scores[2] = P6();
			T1Scores[3] = P7();
			T1Scores[4] = P8();
			T1Scores[5] = P9();
			T1Scores[6] = P10();

			int best = bestProgram(T1Scores, 7);
			currentVertex = next[best];
			break;
		}
		case T2: {
			const enum vertices next[4] = { A8, T1, A4, A7,  };

			double T2Scores[4];

			T2Scores[0] = P11();
			T2Scores[1] = P12();
			T2Scores[2] = P13();
			T2Scores[3] = P0();

			int best = bestProgram(T2Scores, 4);
			currentVertex = next[best];
			break;
		}
		case T3: {
			const enum vertices next[5] = { T2, T0, T0, A5, A4,  };

			double T3Scores[5];

			T3Scores[0] = P14();
			T3Scores[1] = P15();
			T3Scores[2] = P16();
			T3Scores[3] = P17();
			T3Scores[4] = P18();

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
			return 4;
			break;
		}
		case A7: {
			return 5;
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
		}
	}
}
