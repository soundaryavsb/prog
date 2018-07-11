

#include <stdio.h>
int main(void) {
	int a,b,c,i,count=0;
	scanf("%d%d",&a,&b);
	 if(a>b)       //to check whick value is small in given numbers
	{
		c=b;
	}
	else if(b>a)
	{
		c=a;
	}
	else
	{
		c=a;
	}
	 for(i=c;count<1;i--)
	 {
	 	if(a%i==0&&b%i==0)            //to check given two numbers are divided by comman value
	 	{
	 		printf("gcd is %d",i);
	 		count++;
	 	}
	 }
	return 0;
}
