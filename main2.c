#include <stdio.h>
int m=0, n=0, p=0;

void fill_random(int m, int n, int p, double A[], double B[]);
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]);

int main()

{
	while (1)
	{
		double A[m*n], B[n*p], C[m*p];
		fill_random(m, n, p, A, B);
		matrix_times_matrix(m, n, p, A, B, C);
		m+=1;n+=1;p+=1;
		printf("Largest value for m, n and p before segmentation fault: %d\n",m);
	}
	return 0;
}
