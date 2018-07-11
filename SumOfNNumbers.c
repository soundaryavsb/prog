// add the number from 1 to n values
#include <stdio.h>

int main(void) {
	int n,i,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
