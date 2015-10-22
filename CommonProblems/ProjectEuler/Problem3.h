#pragma once
#include "BaseProblem.h"
class Problem3 :
	public BaseProblem
{
public:
	Problem3();
	~Problem3();
	void Execute() override;
	int CalculateNextPrimeNumber(int previousPrime);
};

