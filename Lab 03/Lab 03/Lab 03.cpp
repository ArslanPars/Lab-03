// Lab 03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include <stdlib.h>
#include <time.h>
#include <iostream>


using namespace std;
const int M = 19;
const int N = 19;
const int min = M + N;
int main()
{
	int X[M];
	int Y[N];
	int Z[min];
	srand(time(NULL));
	printf("X:");
	for (int i = 0; i < M; i++)
	{
		X[i] = rand() % 30;
		printf("%2d, ", X[i]);
	}
	printf("\nY:");
	for (int i = 0; i <N; i++)
	{
		Y[i] = rand() % 30;
		printf("%2d, ", Y[i]);
	}
	int j = 0;
	int k = 0;
	printf("\nZ[min(N,M)]:\n");
	while (j<M)
	{
		for (int i = 0; i<N; i++)
		{
			int p = 0;
			if (X[i] == Y[j])
			{
				for (int l = 0; l<min; l++)
					if (X[i] == Z[l])
						p += 1;
				if (p == 0)
				{
					Z[k] = X[i];
					cout << k + 1 << "Min " << Z[k] << endl;
					k += 1;
				}
			}
		}
		j++;
	}
	for (int i = 0; i<100; i++)
		cin.get();
	return 0;
}
