#include<stdio.h>     //标准输入输出库函数

#include<stdlib.h>    //可以输入system用以键入DOS管理窗口界面下的cmd中的命令

#include<string.h>    //字符串，数组定义的库函数
int print()
{
    printf("****************关机程序****************\n");
    printf("****1.实现在十分钟内的定时关闭计算机****\n");
    printf("************2.立即关闭计算机************\n");
    printf("***************3.注销计算机*************\n");
    printf("****************4.退出系统**************\n");
    return 0;

}
void main()
{
    system("title C语言关机程序");//设置cmd窗口宽度
    system("mode con cols=48 lines=25");//窗口宽度高度
    system("color 0B");//设置默认控制台前景个背景色
    system("date /T");
    system("TIME /T");
    char cmd[20] = "shutdown -s -t";
    char t[5] = "0";
    print();
    int c;
    scanf("%d", &c);
    getchar();
    switch (c)
    {
    case 1:
        printf("您想在多少秒后自动关闭计算机？（0~600）\n");
        scanf("%s", t);
        system(strcat(cmd, t));
        break;
    case 2:
        system("shutdown -p");
        break;
    case 3:
        system("shutdown -1");
        break;
    case 0:
        break;
    default:
        printf("Error!\n");
    }
    system("pause");
    exit(0);

}

