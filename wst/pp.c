#include <stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a*b<0)
		printf("Signs are opposite\n");
		else if(a*b>0)
		printf("Signs are not opposot\n");
		else 
		printf("Signs can't be sure\n");
	}
	return 0;
}
