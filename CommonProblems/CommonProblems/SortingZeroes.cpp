// CommonProblems.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//Declare functions
int * sortLogical(int a[], int size);
int * sortFast(int a[], int size);

//This program takes an array of ints as input and places all zeros at the end of the array

int _tmain(int argc, int argv[])
{
	//Example inputs
	//int arrayOfInts[6] = {0,0,0,0,0,0};
	//int arrayOfInts[6] = {10,1,30,5,2,9};
	//int arrayOfInts[6] = {10,0,0,5,2,0};
	int arrayOfInts[6] = {0,1,0,5,2,0};
	int size = 6;

	for (int i = 0; i < 6; i++)
	{
		printf( "input: arrayOfInts[%d] : %d\n", i, arrayOfInts[i]);
	}

	int *p = sortFast(arrayOfInts, size);
	//p = sortLogical(arrayOfInts, size);

	for (int i = 0; i < 6; i++)
	{
		printf( "output: *(p + %d) : %d\n", i, *(p + i));
	}

	char a = ' ';
	scanf_s("%c", &a);
	return 0;
}

int getNumberInArray()
{
	return 0;
}

//Sorts the zeros to the end of the file
//Returns a pointer to the sorted array.
int * sortLogical(int a[], int size)
{
	//The principle is the start from the back with one pointer and the front with another
	//If we find a 0 at the starting pointer, we move all numbers between the front and back pointer one space down
	//and set the element that the back pointer is looking at to 0
	int front = 0;
	int back = size-1;

	while (back >= front)
	{
		if(a[front] != 0)
			front++;
		else
		{
			bool stopped = false;
			for (int i = front; i < back; i++)
			{
				a[i] = a[i+1];
			}

			a[back] = 0;
			back--;
			front++;
		}
	}
	return a;
}

//Sorts the zeros to the end of the file
//Returns a pointer to the sorted array.
//Fastsort runs in O(n) time, since it traverses the array at most two times - once for each pointer.
int * sortFast(int a[], int size)
{
	//This solution starts with two pointers at the beginning of the array.
	//One of them scans foreward for numbers, the other for zeros.
	//It then stores all the zeros  between the two pointers,
	//placing the next number the back pointer finds at the position of the front pointer.

	int front = 0;
	int back = 0;


	while (back < size && front < size)
	{
		if(a[0] == 0)
		{
			while(a[back] == 0 && back < size)
				back++;

			a[front] = a[back];
			a[back] = 0;
		}

		if(a[back] == 0)
			back++;
		else if(a[front] != 0)
			front++;
		else if(front > back)
			back = front +1;
		else
		{
			a[front] = a[back];
			a[back] = 0;
			back++;
			front++;
		}
	}
	return a;
}

