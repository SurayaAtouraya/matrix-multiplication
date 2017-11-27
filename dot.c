double dotproduct(int n, double x[n], double y[n])

{
	double dotproductvalue=0.0;

	for(int i=0;i<=(n-1);i++)
		{
			dotproductvalue += x[i] * y[i];
		}

	return dotproductvalue;
}
