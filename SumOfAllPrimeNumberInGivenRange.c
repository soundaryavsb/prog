#include <stdio.h>

int main(void) {
		int i,n,sum=0,j,a;
	scanf("%d%d",&a,&n);   //enter starting value and final value
for(i=a;i<=n;i++)
{
		int count=0;
	for(j=1;j<=i;j++)
	{
	if(i%j==0)             
	{
		count++;
	}
	}
		if(count==2)
		{
		
			sum=sum+i;
		} 
}
printf("%d",sum);
	return 0;
}
