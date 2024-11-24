#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(long long n)
{
	long long t;
	t=sqrt(n);
	return t*t==n;
}
int main()
{
	long long n,s;s=0;
	scanf("%lld",&n);
	long long a[n];
	for (long long i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for (long long i=0;i<n;i++)
	{
		printf("%lld ",a[i]);
		
	}printf("\n");
    for (long long i=0;i<n;i++)
    {
    	if (check(a[i]))
    	{
    		s+=a[i];
    		printf("%lld ",a[i]);
    		
		}
		
		
	}printf("\n");
	printf("%lld ",s);
}