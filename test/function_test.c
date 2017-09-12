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

CTEST(test_function_myminus, test1) {
	const float a = 1;
	const float b = 2;

	const float suite = myminus(a, b);
	
	const float expected = -1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_myminus, test2) {
	const float a = 2;
	const float b = 1;
	
	const float suite = myminus(a, b);
	
	const float expected = 1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_myminus, test3) {
	const float a = -1;
	const float b = -2;

	const float suite = myminus(a, b);
	
	const float expected = 1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_myminus, test4) {
	const float a = -1;
	const float b = 2;
	
	const float suite = myminus(a, b);

	const float expected = -3;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_myminus, test5) {
	const float a = -1;
	const float b = 0;
	
	const float suite = myminus(a, b);

	const float expected = -1;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_mymultiplication, test1) {
	const float a = 2;
	const float b = 3;
	
	const float suite = mymultiplication(a, b);
	
	const float expected = 6;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_mymultiplication, test2) {
	const float a = 1;
	const float b = 2;

	const float suite = mymultiplication(a, b);
	
	const float expected = 2;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_mymultiplication, test3) {
	const float a = 0;
	const float b = 1341123;
	
	const float suite = mymultiplication(a, b);
	
	const float expected = 0;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_mydivision, test1) {
	const float a = 1;
	const float b = 3;
	
	const float suite = mydivision(a, b);

	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_mydivision, test2) {
	const float a = -1;
	const float b = -5;
	
	const float suite = mydivision(a, b);
	
	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_mydivision, test3) {
	const float a = 500;
	const float b = 7;
	
	const float suite = mydivision(a, b);
	
	const float expected = a / b;
	ASSERT_DBL_NEAR(expected, suite);
}

CTEST(test_function_mypower, test1) {
	const float a = 2;
	const int b = 10;
	
	const float suite = mypower(a, b);
	
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

CTEST(test_function_mypower, test2) {
	const float a = -0.2;
	const int b = -10;
	
	const float suite = mypower(a, b);
	
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

CTEST(test_function_mypower, test3) {
	const float a = 0.12456;
	const int b = 0;
	
	const float suite = mypower(a, b);
	
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