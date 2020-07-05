#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
	    for(j=i;j>0;j--)
        printf(" ");
	    for(j=2*(n-i)+1;j>0;j--)
	    printf("*");
	    printf("\n");
    }
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<i+2;j++)
    	printf(" ");
    	for(j=2*(n-i)-1;j>0;j--)
    	printf("*");
	    printf("\n");
	}
 } 
