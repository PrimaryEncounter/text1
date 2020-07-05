#include <stdio.h>
int main()
{
  int s=1,sum=0,N,a;
  scanf("%d",&N);
  while(N!=0)
  {
    s=1;
    a=N;
    while(a!=0)
    {
    s*=a;
    a--;
    }
    sum+=s;
    N--;
  }
  printf("%d",sum);
  return 0;
}

