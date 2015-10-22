#include "stdafx.h"
#include <iostream>
#include "Problem3.h"
#define ARRAY_SIZE 40

Problem3::Problem3()
{
}

void Problem3::Execute() 
{
	/*I am now aware that this is not the best way of solving this problem.
	The better way of solving this problem is to start from the square root of the large number
	and then check each number on the way down to 0 for two properties:
	1) Does the current number divide the original big number?
	2) Is the current number a prime number
	This way is significantly faster, since you only need to find one prime number.
	Even though, you will also have to check much larger numbers if they are in fact primes,
	overall the above solution runs faster than mine.*/
	bool FoundPrimeRoot = false;
	unsigned long long primenumber = 600851475143;
	int currentPrime = 2;
	int largestPrime = 0;

	while (!FoundPrimeRoot)
	{
		currentPrime = 2;
		while (true)
		{
			currentPrime = CalculateNextPrimeNumber(currentPrime);
			if (primenumber % currentPrime == 0){
				primenumber /= currentPrime;
				printf("Divided by %d, prime is now %llu\n", currentPrime, primenumber);
				if (largestPrime < currentPrime)
					largestPrime = currentPrime;
				break;
			}
			if (currentPrime > primenumber) {
				FoundPrimeRoot = true;
				break;
			}

		}
	}

	printf("\nLargest Prime Factor of 600851475143 is %d", largestPrime);
}

int Problem3::CalculateNextPrimeNumber(int previousPrime)
{
	int nextPrime = previousPrime + 1;
	bool foundPrime = false;
	while (!foundPrime)
	{
		foundPrime = true;
		for (int i = 2; i < nextPrime; i++)
		{
			if (nextPrime % i == 0)
				foundPrime = false;
		}
		if (!foundPrime)
			++nextPrime;
	}
	printf("Found next prime to be %d\n", nextPrime);
	return nextPrime;
}

Problem3::~Problem3()
{
}
