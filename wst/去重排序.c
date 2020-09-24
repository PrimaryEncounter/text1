#include <stdio.h>
int main()
{
    int N,i1,i2,j,t,a[100],b[100],c=0;
    while(scanf("%d",&N)!=EOF)
    {
        if(N==0)
        break;
        c=0;
        for(i1=0;i1<N;i1++)
        scanf("%d",&a[i1]);
        for(i1=0;i1<N-1;i1++)
          for(j=0;j<N-i1-1;j++)
            if(a[j]>a[j+1])
               {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;   
               }
            for(i1=0;i1<N;i1++)
                if(a[i1]!=a[i1-1])
                b[c++]=a[i1];
                printf("%d\n",c);
            for(i2=0;i2<c;i2++)
            printf("%d ",b[i2]);
            printf("\n");
            printf("\n");     
    }
       return 0;
     
 }
 
