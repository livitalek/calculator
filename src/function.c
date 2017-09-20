#include "function.h"

float calculatorPlus(float numb1, float numb2) {
	numb1 += numb2;
	return numb1;
}

float calculatorMinus(float numb1, float numb2) {
	return numb1 - numb2;
}

float calculatorMultiplication(float numb1, float numb2) {
	return numb1 * numb2;
}

float calculatorDivision(float numb1, float numb2) {
	return numb1 / numb2;
}

float calculatorPower(float numb1, int numb2) {
	float numbRet = 1;
	if (numb2 > 0) {
		while (numb2 != 0) {
			numbRet *= numb1;
			numb2--;
		}
	} else if (numb2 < 0) {
		while (numb2 != 0) {
			numbRet /= numb1;
			numb2++;
		}
	}
	return numbRet;
}
