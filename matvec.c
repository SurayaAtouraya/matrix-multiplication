double dotproduct(int n, double x[], double y[]);

void matrix_times_vector(int m, int n, double A[], double x[], double y[])

{
	double temp[n];

	for(int i=0;i<=(m-1);i++)
	{	
		for(int j=0;j<=(n-1);j++)
		{
			
			temp[j]=A[(j+(i*n))];
		}
		y[i] = dotproduct(n, temp, x);
	}
}

