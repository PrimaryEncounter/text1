#include<stdio.h>     

#include<stdlib.h>   

#include<string.h>    

int main()

{

    char a[10];    

flag:

    printf("请输入\"我是猪\",否则电脑将在两分钟后关闭\n");  

    system("shutdown -s -t 120");   

    scanf("%s", a);            

    if (strcmp(a, "我是猪") == 0){  

        printf("恭喜你成功选择自己的属相,主动承认现实!\n");

        system("shutdown -a");  

    }

    else

        goto flag;        

    return 0;

}

