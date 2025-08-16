double maxdist(double x[], double y[], int n)
{
	int i;
	double maxd, d;
	for(i = 0, maxd = 0; i < n; i++)
	{
		d = sqrt(x[i]*x[i] + y[i]*y[i]);
		if(d > maxd)
		{
			maxd = d;
		}
	}
	return maxd;
}
