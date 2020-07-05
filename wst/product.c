// @copyright:3436687954
#include<stdio.h>
#include<string.h>
#include "C:\\product.h"
int main()
{
	int k;
	printf("===============\n");
	printf("1.添加产品信息\n");
	printf("2.查询产品信息\n");
    printf("3.排序产品信息\n");
	printf("4.输出产品信息\n");
	printf("5.退出产品系统\n");
	printf("===============\n");
	printf("请输入(1,2,3,4,5):");
	scanf("%d",&k);
	switch(k)
	{
	case 1:
		printf("功能1已运行");
			break;
	case 2:
		printf("功能2已运行");
			break;
	case 3:
		printf("功能3已运行");
			break;
	case 4:
		printf("功能4已运行");
			break;
	default:
		printf("功能5已运行");	
	}
}

