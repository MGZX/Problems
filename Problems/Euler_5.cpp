/*
 2016/8/3 ZXD

 Smallest multiple
 Problem 5

 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

int is_prime(int n_i);

int main(void)
{
	
	return 0;
}

int is_prime(int n_i)
{
	int i;
	for (i = 2; i < n_i / 2; i++)
	{
		if (n_i % i == 0)
			break;
	}
	if (i < n_i / 2)
		return 0;
	else
		return 1;
}