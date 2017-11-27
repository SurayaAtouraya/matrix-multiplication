#include <stdio.h>

void fill_random(int m, int n, int p, double A[], double B[]);
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]);
void check_result(int m, int n, int p, double A[], double B[], double C[]);

int main()

{
	int m, n, p;
	
	printf("Enter m, n, p:");
	scanf("%d%d%d", &m, &n, &p);

	double A[m*n], B[n*p], C[m*p];

	fill_random(m, n, p, A, B);
	matrix_times_matrix(m, n, p, A, B, C);
	check_result(m, n, p, A, B, C);
	return 0;
}
