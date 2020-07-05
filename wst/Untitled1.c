#include <stdio.h>

int main(void)

{
	int a[12],i;

	for(i = 1 ; a[i-1] != 0 ; i++)
	{
		scanf("%d",&a[i]);
	}

	int b[12],t,j;

	for(i = 1 ; a[i-1] != 0 ; i++)
	{
		t = a[i];

		for(b[i] = 0 ; t > 3 ; )
		{
			j = t/3;

			b[i] = b[i] + j;

			t = t / 3 + t % 3;
		}

		if(t = 2)
		{
			b[i]++;
		}

		if(a[i] == 1)
		{
			b[i]--;
		}

		if(a[i] == 2)
		{
			b[i]--;
		}
	}


	for(i = 1 ; a[i] != 0 ; i++)
	{
		printf("%d\n",b[i]);
	}
	
	return 0;
}

