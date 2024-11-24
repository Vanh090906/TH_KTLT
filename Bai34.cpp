#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
bool check(char s[])
{
	long long len;
	len=strlen(s);
	for (int i=0;i<=len/2;i++)
	{
		if (s[i] != s[len-i-1])
		return false;
	}
	return true;
}
int main()
{
	char s[500000];
	scanf("%s",s);
	
	if (check(s))
	{
		printf("TRUE");
	}
	else 
	{
		printf("FALSE");
	}
}