#include <stdlib.h>

void fill_random(int m, int n, int p, double A[], double B[])

{
	for (int i=0;i<=(m*n-1);i++)
	{	
		A[i] = drand48();
	}

	for (int i=0;i<=(n*p-1);i++)
	{	
		B[i] = drand48();
	}
}
