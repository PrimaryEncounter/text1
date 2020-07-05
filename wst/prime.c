#include <stdio.h>
#include <string.h>
int max,min;
int isPrime(int n)
{
	int i;
	if(n<2) return 0;
	else{
	for(i=2;i<n;i++)
	if(n%i==0)
	  return 0;
	return 1;
}
}
void max_min(int a[])
{
	int i;
	for(i=0;i<26;i++){
		if(a[i]!=0){
			max=a[i];
			min=a[i];
			break;
		}
	}
    for(i=0;i<26;i++){
   	    if(a[i]>max)
   	        max=a[i];
   	    if(a[i]!=0&&a[i]<min)
   	        min=a[i];
   	    }
}
int main() 
{
   int n,l,i,j;
   scanf("%d",&n); 
   while(n--) { 
    char c[101];
    int a[27]={0};
    scanf("%s",c);
    l=strlen(c);
    for(i=0;i<l;i++){
    	j=c[i]-97;
    	a[j]++;
	}
   max_min(a);
   i=isPrime(max-min);
   if(i) 
     printf("Lucky Word\n%d\n",max-min);
   else 
     printf("No Answer\n0\n");
 }
     return 0;
}
