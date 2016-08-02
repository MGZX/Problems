/*
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <iostream>
using namespace std;

int sum(int n);

int main(void)
{
	cout << sum(1000) << endl;
	return 0;
}

int sum(int n)
{
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	return result;
}
