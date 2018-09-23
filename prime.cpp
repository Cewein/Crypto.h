/*

	This is for creating 8 bit prime number.

	by Maximilien "cewein" nowak

*/

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <random>
#include <stdlib.h>     
#include <time.h>
#include <string>
#include <iomanip>

#include "prime.h"

int getPrime()
{
	
	int prime = rand() % 256;

	while (!isPrime(prime) && prime <= 1)
	{
		prime = rand() % 256;
	}

	return  prime;
}

bool isPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0) return false;
	}
	return true;
}

int sizeInt(int num)
{
	std::string string = std::to_string(num);
	return string.length();
}

int modpow(int x, unsigned int y, int p)
{
	int res = 1;	 // Initialize result 

	x = x % p; // Update x if it is more than or 
			   // equal to p 

	while (y > 0)
	{
		// If y is odd, multiply x with result 
		if (y & 1)
			res = (res*x) % p;

		// y must be even now 
		y = y >> 1; // y = y/2 
		x = (x*x) % p;
	}
	return res;
}

bool coprime(int a, int b)
{
	if (a == 0 && b == 1)
		return true;
	if (a == 0 && b != 1)
		return false;
	return coprime(b % a, a);
}

