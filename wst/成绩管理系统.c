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
	printf("请输入学生的总人数：");
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
			printf("程序结束\n");
			getchar();
			getchar();
			break;
		default:
			printf("\n\n输入的命令不对，请重新输入！！\n");
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
		printf("请输入第%d号的学号、姓名和各门课程的成绩\n", i + 1);
		printf("学    号：");
		scanf("%ld", &stu[i].sno);
		getchar();
		printf("姓    名：");
		gets(stu[i].sname);
		for (j = 0; j < n; j++)
		{
			printf("课程%d的成绩：", j + 1);
			scanf("%lf", &stu[i].score[j]);
		}
	}
}




void QueryByName(struct student stu[], int m, int n)
{
	printf("函数实现中！！\n");
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
	printf("各个学生的总成绩计算完毕！\n");
}


void CourseAverageScore(struct student stu[], float avecourse[], int m, int n)
{
	printf("函数实现中！！\n");
}

void SortbyTotalScore(struct student stu[], int m, int n)

{
	printf("函数实现中！！\n");
}


void DisplayStuInfor(struct student stu[], int m, int n)
{
	int i, j;
	if (flag == 0)
		StuToalScore(stu, m, n);
	printf("\t学号\t姓名\t\t课程1\t课程2\t课程3\t总成绩\n");
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
	printf("\n\t这是班级成绩管理系统，请选择你要的操作 ：\n\n");
	printf("\t\t1：输入学生信息\n");
	printf("\t\t2：按姓名查询学生信息\n");
	printf("\t\t3：计算学生的总成绩\n");
	printf("\t\t4：计算各门课程的平均分\n");
	printf("\t\t5：按学生成绩由高到低排序\n");
	printf("\t\t6：输出学生信息\n");
	printf("\t\t0：退出\n");

	printf("\n\n请输入命令：");
	scanf("%d", &item);
	return item;
}

