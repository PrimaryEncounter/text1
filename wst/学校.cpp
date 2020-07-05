#include <stdio.h>
#define P 10000
int main()
{
    int N,sch,sco,i,a[P]={0},max=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&sch,&sco);
        a[sch-1]+=sco;
    }
    for(i=0;i<N;i++)
    {
        if(a[i]>a[max])
        max=i;
    }
    printf("%d %d",max+1,a[max]);
    return 0;
}
