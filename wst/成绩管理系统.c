#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STU_NUM 40
#define COURSE_NUM 3
#define NAME_LEN 15

struct student
{
	long sno;
	char sname[NAME_LEN];
	float score[COURSE_NUM];
	float total;
};

int flag = 0;

void IputStuInfor(struct student stu[], int m, int n);
void QueryByName(struct student stu[], int m, int n);
void StuToalScore(struct student stu[], int m, int n);
void CourseAverageScore(struct student stu[], float avecourse[], int m, int n);
void SortbyTotalScore(struct student stu[], int m, int n);
void DisplayStuInfor(struct student stu[], int m, int n);

int Menu(void);

void main()
{
	struct student stu[STU_NUM];
	float avecourse[COURSE_NUM] = { 0 };

	int m, n = 3;
	int i, j;
	int item;
	printf("������ѧ������������");
	scanf("%d", &m);
	while (1)
	{
		item = Menu();

		switch (item)
		{
		case 1:
			IputStuInfor(stu, m, n);
			getchar();
			getchar();
			break;
		case 2:
			QueryByName(stu, m, n);
			getchar();
			getchar();
			break;
		case 3:
			StuToalScore(stu, m, n);
			flag = 1;
			getchar();
			getchar();
			break;
		case 4:
			CourseAverageScore(stu, avecourse, m, n);
			getchar();
			getchar();
			break;
		case 5:
			SortbyTotalScore(stu, m, n);
			getchar();
			getchar();
			break;
		case 6:
			DisplayStuInfor(stu, m, n);
			getchar();
			getchar();
			break;
		case 0:
			exit(0);
			printf("�������\n");
			getchar();
			getchar();
			break;
		default:
			printf("\n\n���������ԣ����������룡��\n");
			getchar();
			getchar();
			break;
		}
	}
}


void IputStuInfor(struct student stu[], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		printf("�������%d�ŵ�ѧ�š������͸��ſγ̵ĳɼ�\n", i + 1);
		printf("ѧ    �ţ�");
		scanf("%ld", &stu[i].sno);
		getchar();
		printf("��    ����");
		gets(stu[i].sname);
		for (j = 0; j < n; j++)
		{
			printf("�γ�%d�ĳɼ���", j + 1);
			scanf("%lf", &stu[i].score[j]);
		}
	}
}




void QueryByName(struct student stu[], int m, int n)
{
	printf("����ʵ���У���\n");
}



void StuToalScore(struct student stu[], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		stu[i].total = 0;
		for (j = 0; j < n; j++)
			stu[i].total += stu[i].score[j];
	}
	printf("����ѧ�����ܳɼ�������ϣ�\n");
}


void CourseAverageScore(struct student stu[], float avecourse[], int m, int n)
{
	printf("����ʵ���У���\n");
}

void SortbyTotalScore(struct student stu[], int m, int n)

{
	printf("����ʵ���У���\n");
}


void DisplayStuInfor(struct student stu[], int m, int n)
{
	int i, j;
	if (flag == 0)
		StuToalScore(stu, m, n);
	printf("\tѧ��\t����\t\t�γ�1\t�γ�2\t�γ�3\t�ܳɼ�\n");
	for (i = 0; i < n; i++)
	{
		printf("\t%ld%-8s", stu[i].sno, stu[i].sname);
		for (j = 0; j < n; j++)
			printf("\t%.1f", stu[i].score[j]);
		printf("\t%.lf\n", stu[i].total);
	}
}


int Menu(void)
{
	int item;
	system("cls");
	printf("\n\t���ǰ༶�ɼ�����ϵͳ����ѡ����Ҫ�Ĳ��� ��\n\n");
	printf("\t\t1������ѧ����Ϣ\n");
	printf("\t\t2����������ѯѧ����Ϣ\n");
	printf("\t\t3������ѧ�����ܳɼ�\n");
	printf("\t\t4��������ſγ̵�ƽ����\n");
	printf("\t\t5����ѧ���ɼ��ɸߵ�������\n");
	printf("\t\t6�����ѧ����Ϣ\n");
	printf("\t\t0���˳�\n");

	printf("\n\n���������");
	scanf("%d", &item);
	return item;
}

