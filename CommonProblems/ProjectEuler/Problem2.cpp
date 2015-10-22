#include "stdafx.h"
#include "Problem2.h"


Problem2::Problem2()
{
}

void Problem2::Execute()
{
	int back = 1;
	int front = 2;
	int temp = 0;
	int sum = 0;

	while (front < 4000000)
	{
		printf("Back is now: %d and Front is now: %d\n", back, front);
		if (front % 2 == 0) {
			sum += front;
		}

		temp = back;
		back = front;
		front += temp;
	}

	printf("\nThe final sum is: %d", sum);
}

Problem2::~Problem2()
{
}
