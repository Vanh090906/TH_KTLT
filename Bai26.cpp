#include <stdio.h>
#include <math.h>
double tu(double x)
{
    double s=1;
	for (int i=2;i<=64;i+=2)
	{
		s*=(x-i);
	}
	return s;
}
double mau(double x)
{
  	double s=1;
	for (int i=1;i<=63;i+=2)
	{
		s*=(x-i);
	}
	return s;
}
int main()
{
	double x;
	scanf("%lf",&x);
	for (int i=1;i<=63;i+=2)
	{
		if(x==i)
		{
			printf("FALSE");
			return 0;
		}
		
	}
	printf("%lf",tu(x)/mau(x));
	return 0;
}