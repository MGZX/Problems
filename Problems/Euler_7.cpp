/*
 2016/8/7 ZXD

 10001st prime
 Problem 7

 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

 What is the 10 001st prime number?
*/

#include <iostream>
using namespace std;

bool is_prime(int n);

int main(void)
{
	int index = 0;
	int n = 1;
	do
	{
		n++;
		if (is_prime(n))
			index++;
	}
	while (index != 10001);
	cout << n;
	system("pause");
	return 0;
}

bool is_prime(int n)
{
	int i;
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			break;
	if (i > sqrt(n))
		return true;
	else
		return false;
}