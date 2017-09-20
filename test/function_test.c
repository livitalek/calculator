#include "function.h"
#include "ctest.h"

CTEST(test_function_calculatorPlus, test1) {
	const float a = 1;
	const float b = 2;
	
	const float suite = calculatorPlus(a, b);
	
	const float expected = 3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPlus, test2) {
	const float a = -2;
	const float b = -1;
	
	const float suite = calculatorPlus(a, b);
	
	const float expected = -3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPlus, test3) {
	const float a = -2;
	const float b = 1;
	
	const float suite = calculatorPlus(a, b);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPlus, test4) {
	const float a = 12131;
	const float b = 0;

	const float suite = calculatorPlus(a, b);

	const float expected = 12131;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMinus, test1) {
	const float a = 1;
	const float b = 2;

	const float suite = calculatorMinus(a, b);
	
	const float expected = -1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMinus, test2) {
	const float a = 2;
	const float b = 1;
	
	const float suite = calculatorMinus(a, b);
	
	const float expected = 1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMinus, test3) {
	const float a = -1;
	const float b = -2;

	const float suite = calculatorMinus(a, b);
	
	const float expected = 1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMinus, test4) {
	const float a = -1;
	const float b = 2;
	
	const float suite = calculatorMinus(a, b);

	const float expected = -3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMinus, test5) {
	const float a = -1;
	const float b = 0;
	
	const float suite = calculatorMinus(a, b);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMultiplication, test1) {
	const float a = 2;
	const float b = 3;
	
	const float suite = calculatorMultiplication(a, b);
	
	const float expected = 6;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMultiplication, test2) {
	const float a = 1;
	const float b = 2;

	const float suite = calculatorMultiplication(a, b);
	
	const float expected = 2;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMultiplication, test3) {
	const float a = 0;
	const float b = 1341123;
	
	const float suite = calculatorMultiplication(a, b);
	
	const float expected = 0;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorDivision, test1) {
	const float a = 1;
	const float b = 3;
	
	const float suite = calculatorDivision(a, b);

	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorDivision, test2) {
	const float a = -1;
	const float b = -5;
	
	const float suite = calculatorDivision(a, b);
	
	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorDivision, test3) {
	const float a = 500;
	const float b = 7;
	
	const float suite = calculatorDivision(a, b);
	
	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPower, test1) {
	const float a = 2;
	const int b = 10;
	
	const float suite = calculatorPower(a, b);
	
	float expa = 1;
	int expb = b;
	if (expb > 0) {
		while (expb != 0) {
			expa *= a;
			expb--;
		}
	} else if (expb < 0) {
		while (expb != 0) {
			expa /= a;
			expb++;
		}
	}
	const float expected = expa;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPower, test2) {
	const float a = -0.2;
	const int b = -10;
	
	const float suite = calculatorPower(a, b);
	
	float expa = 1;
	int expb = b;
	if (expb > 0) {
		while (expb != 0) {
			expa *= a;
			expb--;
		}
	} else if (expb < 0) {
		while (expb != 0) {
			expa /= a;
			expb++;
		}
	}
	const float expected = expa;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPower, test3) {
	const float a = 0.12456;
	const int b = 0;
	
	const float suite = calculatorPower(a, b);
	
	float expa = 1;
	int expb = b;
	if (expb > 0) {
		while (expb != 0) {
			expa *= a;
			expb--;
		}
	} else if (expb < 0) {
		while (expb != 0) {
			expa /= a;
			expb++;
		}
	}
	const float expected = expa;
	ASSERT_DBL_NEAR(expected, suite);
}
