// @copyright:3436687954
#include<stdio.h>
#include<string.h>
#include "C:\\product.h"
int main()
{
	int k;
	printf("===============\n");
	printf("1.��Ӳ�Ʒ��Ϣ\n");
	printf("2.��ѯ��Ʒ��Ϣ\n");
    printf("3.�����Ʒ��Ϣ\n");
	printf("4.�����Ʒ��Ϣ\n");
	printf("5.�˳���Ʒϵͳ\n");
	printf("===============\n");
	printf("������(1,2,3,4,5):");
	scanf("%d",&k);
	switch(k)
	{
	case 1:
		printf("����1������");
			break;
	case 2:
		printf("����2������");
			break;
	case 3:
		printf("����3������");
			break;
	case 4:
		printf("����4������");
			break;
	default:
		printf("����5������");	
	}
}

