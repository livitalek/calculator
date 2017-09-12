#include "function.h"

float myplus(float numb1, float numb2) {
	numb1 += numb2;
	return numb1;
}

float myminus(float numb1, float numb2) {
	return numb1 - numb2;
}

float mymultiplication(float numb1, float numb2) {
	return numb1 * numb2;
}

float mydivision(float numb1, float numb2) {
	return numb1 / numb2;
}

float mypower(float numb1, int numb2) {
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
