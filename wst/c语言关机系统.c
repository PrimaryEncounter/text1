#include<stdio.h>     //��׼��������⺯��

#include<stdlib.h>    //��������system���Լ���DOS�����ڽ����µ�cmd�е�����

#include<string.h>    //�ַ��������鶨��Ŀ⺯��
int print()
{
    printf("****************�ػ�����****************\n");
    printf("****1.ʵ����ʮ�����ڵĶ�ʱ�رռ����****\n");
    printf("************2.�����رռ����************\n");
    printf("***************3.ע�������*************\n");
    printf("****************4.�˳�ϵͳ**************\n");
    return 0;

}
void main()
{
    system("title C���Թػ�����");//����cmd���ڿ��
    system("mode con cols=48 lines=25");//���ڿ�ȸ߶�
    system("color 0B");//����Ĭ�Ͽ���̨ǰ��������ɫ
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
        printf("�����ڶ�������Զ��رռ��������0~600��\n");
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

