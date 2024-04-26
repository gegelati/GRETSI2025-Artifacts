/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-15 16:00:09
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "codeGenArmlearn_program.h"
#include "externHeader.h"
extern double* in1;
extern double* in2;
extern double* in3;
extern double* in4;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in2[2];
		double op1 = in4[5];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[1];
		double op1 = in3[2];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[1];
		double op1 = in3[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[4];
		reg[2] = exp(op0);
	}
	{
		double op0 = reg[2];
		double op1 = in3[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[0];
		double op1 = in3[0];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[1];
		double op1 = in3[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}
