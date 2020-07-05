#include <stdio.h>
#include <string.h>
int main()
{
  int n,length,i;
  char a[100];
  scanf("%d",&n);
  getchar();
  while(n--)
  {
    gets(a);
    length=strlen(a);
      for(i=length-1;i>=0;i--)
      {
        if(a[i]>='a'&&a[i]<='z')
          printf("%c",a[i]);
      }
    printf("\n");
  }
  
}
