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
	int n = 20;
	int data[2][20] = { 0 };
	int num = 0;
	int result = 1;
	for (int i = 2; i <= 20; i++)
	{
		if (1 == is_prime(i))
		{
			data[0][num] = i;
			data[1][num] = 1;
			num++;
		}
		else
		{
			for (int j = 0; j < num; j++)
			{
				int temp_n = 0;
				int temp_i = i;
				while (temp_i % data[0][j] == 0)
				{
					temp_n++;
					temp_i /= data[0][j];
				}
				if (temp_n > data[1][j])
					data[1][j] = temp_n;
			}
		}
	}
	for (int i = 0; i < num; i++)
		for (int j = 0; j < data[1][i]; j++)
			result *= data[0][i];
	cout << result << endl;
	cin.get();
	return 0;
}

int is_prime(int n_i)
{
	for (int i = 2; i <= n_i / 2; i++)
		if (n_i % i == 0)
			return 0;
	return 1;
}
