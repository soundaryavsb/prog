#include <stdio.h>

int main(void)
{
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		if(i==n)
		{
		count++;
		}
	}
	if(count==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;
}
