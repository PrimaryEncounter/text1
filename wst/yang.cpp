#include<stdio.h>
int fun(int a[], int n)
{
	int i, j, k = 0;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j] || a[j] == 0)//��ÿ���������Ƚ�һ�Σ���������� 
				return 0;			//��ͬ�Ļ�ĳ����ֵΪ���������������� 
		}
	if (i == n - 2 && j == n - 1)	//��i���ڵ����ڶ�������j�������һ����ʱ 
	{						//˵�����е�����������һ�� 
		return 1;
	}
}
int main()
{
	int a[9], i, j, temp;
	for (i = 123; i <= 329; i++)
	{
		temp = i;			//������ʱ������i��ֵ������ 
		for (j = 0; j < 9; j++)	//������λ����������洢������֮�� 
		{
			a[j] = temp % 10;
			temp /= 10;
			if (temp == 0 && j == 2)
				temp = 2 * i;
			if (temp == 0 && j == 5)
				temp = 3 * i;
		}
		if (fun(a, 9) != 0)
			printf("%d %d %d\n", i, 2 * i, 3 * i);
	}
}

