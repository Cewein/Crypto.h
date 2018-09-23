#include "prime.h"
#include "key.h"
#include "crypto.h"

#include <iostream>
#include <time.h>
#include <random>

void getKey(File file)
{
	srand(time(NULL));
	file.p = getPrime(); 
	file.q = getPrime();
	file.n = file.p * file.q; //modulus
	file.nT = (file.p - 1) * (file.q - 1); // totien of q and p
	file.e = getPublic(file.nT);
	file.d = getPrivate(file.e, file.nT);
	std::cout << "p: " << file.p << " q: " << file.q << " n: " << file.n << " nT: " << file.nT << " e: " << file.e << " d: " << file.d <<std::endl;
}


int getPublic(int nT)
{
	int e = rand() % (nT - 1) + 2; // 1 < e < nT
	if (coprime(e, nT)) return e;
	if (coprime(e, nT) == false) getPublic(nT);
}

int getPrivate(int e, int nT)
{
	int d = 1, x;
	while (true)
	{
		x = (e * d) % nT;
		if (x == 1) return d;
		d++;
	}
}