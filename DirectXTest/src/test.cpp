#include <iostream>

#include "test.h"
#define J  *t

void test(int t)
{
	std::cout << t << std::endl;
	int x = 1J;
	std::cout << x << std::endl;
}

