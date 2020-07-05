#include<stdio.h>
int a[105],k[105],kk=100,aa=100;
void wzk()
{
    int i=1;
    while(!k[i]) i++;
    kk=i;
}
void wza()
{
    int i=1;
    while(!a[i]) i++;
    aa=i;
}
void cc()
{
	int i;
    for(i=100;i>=kk;i--)
    {
        a[i]+=k[i];
        a[i-1]+=a[i]/10;
        a[i]%=10;
    }
    wza();
}
int main()
{
    int i,j,m,s,n;
    scanf("%d",&n);
    a[100]=1;
    k[100]=1;
    for(i=2;i<=n;i++)
    {
        for(j=100;j>=aa;j--)
            k[j]*=i;
        for(m=100;m>=aa;m--)
        {
            k[m-1]+=k[m]/10;
            k[m]%=10;
        }
        wzk();
        cc();
    }
    for(s=aa;s<=100;s++)
        printf("%d",a[s]);
    return 0;
}

