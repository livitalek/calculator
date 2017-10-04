#include <math.h>
#include "function.h"
#include "ctest.h"

CTEST(test_function_calculatorPlus, when_pozitive) {
	const float a = 1;
	const float b = 2;

	const float suite = calculatorPlus(a, b);

	const float expected = 3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPlus, when_negative) {
	const float a = -2;
	const float b = -1;

	const float suite = calculatorPlus(a, b);

	const float expected = -3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMinus, when_negative) {
	const float a = 1;
	const float b = 2;

	const float suite = calculatorMinus(a, b);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMinus, when_pozitive) {
	const float a = 2;
	const float b = 1;

	const float suite = calculatorMinus(a, b);

	const float expected = 1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMultiplication, when_pozitve) {
	const float a = 2;
	const float b = 3;

	const float suite = calculatorMultiplication(a, b);

	const float expected = 6;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMultiplication, when_negative) {
	const float a = 1;
	const float b = -2;

	const float suite = calculatorMultiplication(a, b);

	const float expected = -2;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorMultiplication, when_zero) {
	const float a = 0;
	const float b = 1341123;

	const float suite = calculatorMultiplication(a, b);

	const float expected = 0;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorDivision, when_pozitive) {
	const float a = 1;
	const float b = 3;

	const float suite = calculatorDivision(a, b);

	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorDivision, when_negative) {
	const float a = 1;
	const float b = -5;

	const float suite = calculatorDivision(a, b);

	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPower, when_degree_pozitive) {
	const float a = 2;
	const int b = 10;

	const float suite = calculatorPower(a, b);

    const float expected = pow(a, b);

	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPower, when_degree_negative) {
	const float a = 2;
	const int b = -10;

	const float suite = calculatorPower(a, b);

	const float expected = pow(a, b);

	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_calculatorPower, when_degree_zero) {
	const float a = 0.12456;
	const int b = 0;

	const float suite = calculatorPower(a, b);

	const float expected = pow(a, b);

	ASSERT_DBL_NEAR(expected, suite);
}
