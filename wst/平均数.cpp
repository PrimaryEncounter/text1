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
	printf("������10����:\n");
	for(i=0;i<10;i++)
		scanf("%f",&b[i]);
	aver=average(b);
	printf("ƽ����Ϊ:%f\n",aver);
}

