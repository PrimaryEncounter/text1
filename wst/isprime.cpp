#include<stdio.h>
int a[105]/*阶乘和*/,k[105]/*阶乘*/,kk=100/*k当前位置*/,aa=100/*a当前位置*/;
void wzk()//计算k位置
{
    int i=1;
    while(!k[i]) i++;
    kk=i;
}
void wza()//计算a位置
{
    int i=1;
    while(!a[i]) i++;
    aa=i;
}
void cc()//把阶乘累加
{
    for(int i=100;i>=kk;i--)//加法不用加完再进位
    {
        a[i]+=k[i];
        a[i-1]+=a[i]/10;
        a[i]%=10;
    }
    wza();
}
int main()
{
    int n;
    scanf("%d",&n);
    a[100]=1;//从100开始存，ps:50的阶乘只有65位
    k[100]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=100;j>=aa;j--)
            k[j]*=i;
        for(int j=100;j>=aa;j--)//坑！一定要先乘完再进位。。。
        {
            k[j-1]+=k[j]/10;
            k[j]%=10;
        }
        wzk();
        cc();
    }
    for(int i=aa;i<=100;i++)
        printf("%d",a[i]);
    return 0;
}

