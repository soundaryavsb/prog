#include <stdio.h>

int main(void) {
	int a,b,*ptr1,*ptr2;
	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	if(*ptr1>*ptr2)
	{
		printf("%d",*ptr1);
	}
	else if(*ptr2>*ptr1)
	{
		printf("%d",*ptr2);
	}
	else
	{
		printf("they are same");
	}
	return 0;
}
