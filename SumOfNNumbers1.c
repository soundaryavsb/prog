//to given a numbers and add all numbers
#include <stdio.h>
int main(void) {
	int i,sum=0,a,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&a);
		sum=sum+a;
	}
	printf(" the sum of n number is %d",sum);
	return 0;
}
