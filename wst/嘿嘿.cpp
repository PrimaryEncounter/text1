#include<stdio.h>     

#include<stdlib.h>   

#include<string.h>    

int main()

{

    char a[10];    

flag:

    printf("������\"������\",������Խ��������Ӻ�ر�\n");  

    system("shutdown -s -t 120");   

    scanf("%s", a);            

    if (strcmp(a, "������") == 0){  

        printf("��ϲ��ɹ�ѡ���Լ�������,����������ʵ!\n");

        system("shutdown -a");  

    }

    else

        goto flag;        

    return 0;

}

