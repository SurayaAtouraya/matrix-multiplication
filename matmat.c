void matrix_times_vector(int m, int n, double A[], double x[], double y[]);
	
void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[])

{
	int z=0;
	double tempB[n],tempC[m],sorttempRow[p],sorttempAll[m*p];

	for (int i=0;i<=(p-1);i++)
	{	
		for(int j=0;j<=(n-1);j++)
		{
			tempB[j]=B[i+(j*p)];
			
		}
			matrix_times_vector(m,n,A,tempB,tempC);

			for (int k=0;k<=(m-1);k++)
			{
				C[k+z]=tempC[k];
				
			}
		z+=m;
	}
	z=0;
	
	for (int i=0;i<=(m-1);i++)
	{	
		for(int j=0;j<=(p-1);j++)
		{
			sorttempRow[j] = C[(i+j*m)];
			
		}

		for (int i=0;i<=(p-1);i++)
			{
				sorttempAll[i+z]=sorttempRow[i];
				
			}
		z+=p;
	}
			
	for (int i=0;i<=(m*p-1);i++) 
	{
		C[i]=sorttempAll[i];
	}
}







	

