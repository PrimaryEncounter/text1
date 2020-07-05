#include<stdio.h>
int gcd(int a,int b)
{
	int t;
	while(b!=0)
	{
	 t=a%b;
	 a=b;
	 b=t;
	}
	return a;
}
int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d,%d",gcd(a,b),lcm(a,b));
	return 0;
}

