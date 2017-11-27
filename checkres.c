
#include <math.h>
#include <stdio.h>

void check_result(int m, int n, int p, double A[], double B[], double C[])
{
  // A mxn, B nxp, C mxp
  double R[m*p];
  int i, j, k;
  for (i=0; i<m; i++)
    for (j=0; j<p; j++)
      {
	R[i*p+j] = 0;
	for (k=0; k<n; k++)
	  // R[i][j] += A[i][k]*B[k][j]
	  R[i*p+j] += A[i*n+k]*B[k*p+j];
      }

  double max_err=0;
  for (i=0; i<m*p; i++)
    {
      double err = fabs(R[i] -C[i]);
      if (err>max_err)
	max_err = err;
    }
  printf("Max error %.1e\n", max_err);
  if (max_err> 1e-14)
    printf("FAILURE\n");
  else
    printf("SUCCESS\n");

}

