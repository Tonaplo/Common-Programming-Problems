#include "stdafx.h"
#include "Problem1.h"


Problem1::Problem1()
{
}

void Problem1::Execute() {
	int sum = 0;
	for (int i = 0; i < 1000; ++i)
	{
		if (i % 3 == 0){
			sum += i; // If the number is divisible by 3 add it. Note that this catches when the number is divisible by both 3 and 5.
		}
		else if (i % 5 == 0) {
			sum += i; // If the number is divisible by 5 add it
		}
	}
	printf("sum is %d", sum);
	return;
}

Problem1::~Problem1()
{
}
