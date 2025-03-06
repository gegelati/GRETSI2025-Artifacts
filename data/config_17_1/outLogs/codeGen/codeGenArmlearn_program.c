/**
 * File generated with GEGELATI v1.3.1
 * On the 2024-04-12 16:09:31
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
		double op0 = in4[4];
		double op1 = in1[0];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[1];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[5];
		double op1 = in2[0];
		double op2 = in2[0];
		double op3 = in1[2];
		reg[0] = sqrt(pow(op0 - op1,2) + pow(op2 - op3,2));
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in3[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in1[2];
		double op2 = in2[0];
		double op3 = in1[1];
		reg[0] = sqrt(pow(op0 - op1,2) + pow(op2 - op3,2));
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P8(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[0];
		double op1 = in3[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P9(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P10(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in1[2];
		double op2 = in2[2];
		double op3 = in1[1];
		reg[0] = sqrt(pow(op0 - op1,2) + pow(op2 - op3,2));
	}
	return reg[0];
}

double P11(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P12(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[2];
		double op1 = in3[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P13(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[4];
		double op1 = in1[1];
		double op2 = in1[1];
		double op3 = in2[1];
		reg[0] = sqrt(pow(op0 - op1,2) + pow(op2 - op3,2));
	}
	return reg[0];
}

double P14(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P15(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = reg[0];
		double op1 = in3[1];
		reg[0] = pow(op0,2) + pow(op1,2);
	}
	return reg[0];
}

double P16(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[5];
		double op1 = in2[1];
		double op2 = in2[0];
		double op3 = in1[2];
		reg[0] = sqrt(pow(op0 - op1,2) + pow(op2 - op3,2));
	}
	return reg[0];
}

double P17(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[0];
		double op1 = in4[2];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P18(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in1[1];
		double op1 = in4[3];
		double op2 = in4[4];
		double op3 = in1[0];
		reg[0] = sqrt(pow(op0 - op1,2) + pow(op2 - op3,2));
	}
	return reg[0];
}

double P19(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[1];
		double op1 = reg[7];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P20(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[2];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P21(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in3[0];
		double op1 = in4[1];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

double P22(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	{
		double op0 = in4[1];
		double op1 = in3[1];
		reg[0] = ((op0) < (op1)) ? -1*(op0) : (op0);
	}
	return reg[0];
}
