#include <stdio.h>
int max(int a[],int n)
{
	int i,*max;
	*max=a[0];
	for(i=0;i<n;i++);
	if(a[i]>*max)
	*max=a[i];
	printf("%d ",max);
 } 
int min(int a[],int n)
{
	int i,*min;
	*min=a[0];
	for(i=0;i<n;i++);
	if(a[i]<*min)
	*min=a[i];
	printf("%d",min);
 } 
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    max(a,n);
	min(a,n);
}
