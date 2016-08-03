/*
 2016/8/3 ZXD

Largest palindrome product
Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ¡Á 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

int is_palindromic(int n_i); // check if n is palindromic or not

int main(void)
{
	for (int i = 999; i > 100; i--)
		for (int j = 999; j > 100; j--)
		{
			if (1 == is_palindromic(i * j))
			{
				std::cout << i * j << " = " << i << " * " << j <<std::endl;
				std::cin.get();
				return 0;
			}
		}
	std::cerr << "Not Found!\n";
	return 1;
}
int is_palindromic(int n_i)
{
	int num[7] = { 0 };
	int size = 0;
	do
	{
		num[size++] = n_i % 10;
		n_i /= 10;
	}
	while (n_i != 0);
	for (int i = 0; i < size / 2; i++)
	{
		if (num[i] != num[size - i - 1])
			return 0;
	}
	return 1;
}