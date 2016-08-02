/*
 2016/8/2 ZXD

Largest prime factor
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <cstdio>
#include <cstdlib>
int max_prime_factor(long long n_i);
int is_prime(int n_i);

int main(void)
{
	long long n = 600851475143;
	int result = max_prime_factor(n);
	printf("%d\n", result);
	system("pause");
	return 0;
}

int max_prime_factor(long long n_i)
{
	int i = 2;
	do
	{
		if (n_i % i == 0)
		{
			n_i /= i;
		}
		else
		{
			do
			{
				i++;
			}
			while (is_prime(i) == 0);
		}
	}
	while (n_i != 1);
	return i;
}

int is_prime(int n_i)
{
	int i = 2;
	while (i <= n_i / 2)
	{
		if (n_i % i == 0)
			break;
		else
			i++;
	}
	if (i > n_i / 2)
		return 1;
	else
		return 0;
}
