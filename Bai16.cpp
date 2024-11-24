#include <stdio.h>
#include <math.h>
double tong(double a,long long n,double d)
{
	
	return n*a+(n*(n-1)*d)/2;
}

int main()
{
	
	long long n;
	double a,d;
	scanf("%lld",&n);
	scanf("%lf",&a);scanf("%lf",&d);
	if (n<=0)
	{
		printf("FALSE");
		return 0;
	}
	
	else printf("%lf",tong(a,n,d));
	return 0;
}