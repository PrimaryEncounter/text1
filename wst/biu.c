#include <stdio.h>
#include <string.h>
int main()
 {
 	char a[100];
 	int i,j,n,s=0;
 	scanf("%s",a);
 	n=strlen(a);
 	for(i=0,j=n-1;i<n,j>=0;i++,j--)
 	if(a[i]==a[j])
 	s+=1;
 	if(s==n)
 	printf("yes");
 	else
 	printf("no");
 }
