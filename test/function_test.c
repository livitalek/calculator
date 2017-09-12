#include "function.h"
#include "ctest.h"

CTEST(test_function_myplus, test1) {
	const float a = 1;
	const float b = 2;
	
	const float suite = myplus(a, b);
	
	const float expected = 3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_myplus, test2) {
	const float a = -2;
	const float b = -1;
	
	const float suite = myplus(a, b);
	
	const float expected = -3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_myplus, test3) {
	const float a = -2;
	const float b = 1;
	
	const float suite = myplus(a, b);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_myplus, test4) {
	const float a = 12131;
	const float b = 0;

	const float suite = myplus(a, b);

	const float expected = 12131;
	ASSERT_DBL_NEAR(expected, suite);
}
