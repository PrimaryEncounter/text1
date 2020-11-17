# include <stdio.h>
int G(int n,int k);
int gcd(int a,int b);
int f(int n);
int g(int n);

int G(int n,int k)
{
    if (k == 1)
    {
        return f(g(n));
    }
    else if (k > 1 && k % 2 == 0)
    {
        return g(G(n,k-1));
    }
    else if (k > 1 && k % 2 == 1)
    {
        return f(G(n,k-1));
    }
}
int gcd(int a,int b)
{
   return !b?a:gcd(b,a%b);
}
int f(int n)
{
    int i,num1,sum = 0;
    if (n == 1)
    {
        return 1;
    } 
	else
    {
        for(i = 1; i <= n-1; i++) {
            num1 = gcd(i,n-i);
            if (num1 == 1)
                sum += num1;
        }
        return sum;
    }
}
int g(int n)
{
    int d,sum = 0;
    for (d = 1; d <= n ; d++) {
        if (n%d==0)
            sum += f(n/d);
    }
    return sum;
}
int main()
{
    int i,nums,n,k;
    scanf("%d",&nums);
   	int sum[nums];
   	if(nums<=500){
   		for (i = 1; i <= nums; i++) {
        scanf("%d %d",&n,&k);
        if(n<500&&k<500) sum[i] = G(n,k);
        else return 0;
    }
    for (i = 1; i <= nums ; i++) {
        printf("%d\n",sum[i]);
    }
}
else 
    return 0;
}

