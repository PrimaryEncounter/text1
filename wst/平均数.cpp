#include<stdio.h>
float average(float a[10])
{
	int i;
	float aver,sum=0;
	for(i=0;i<10;i++)
		sum=sum+a[i];
	aver=sum/10;
	return(aver);
}
void main()
{
	float b[10],aver;
	int i;
	printf("请输入10个数:\n");
	for(i=0;i<10;i++)
		scanf("%f",&b[i]);
	aver=average(b);
	printf("平均数为:%f\n",aver);
}

