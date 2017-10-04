#include "test-calculator.h"
#include "ctest.h"

CTEST(test_function_number, when_pozitive) {
	char input[80] = "1.004    ";
	double output;

	number(input, &output);

	double expected = 1.004;

	ASSERT_DBL_NEAR(expected, output);
}

CTEST(test_function_number, when_negative) {
	char input[80] = "-1.023";
	double output;

	number(input, &output);

	const double expected = -1.023;
	ASSERT_DBL_NEAR(expected, output);
}

CTEST(test_function_number, when_true) {
    char input[80] = "-1.023";
	double output;

	ASSERT_TRUE(number(input, &output));
}

CTEST(test_function_number, when_false) {
    char input[80] = "-1.023f";
	double output;

	ASSERT_FALSE(number(input, &output));
}

CTEST(test_function_charIntoNumber, when_true) {
    char input[80] = "^    ";
    char output;

    ASSERT_TRUE(charIntoNumber(input, &output));
}

CTEST(test_function_charIntoNumber, when_false) {
    char input[80] = "    ^-";
	char output;

	ASSERT_FALSE(charIntoNumber(input, &output));
}
