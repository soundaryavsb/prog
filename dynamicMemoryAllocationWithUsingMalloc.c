#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int num,i,*ptr;
//	printf("Enter element");
	scanf("%d",&num);
	ptr=(int*)malloc(num*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated");
		exit(0);
	}
//	printf("Enter element\n");
	for(i=0;i<num;++i)
	{
		scanf("%d",ptr+i);
//		printf("Enter element\n");
	}
	for(i=0;i<num;++i)
	{
		printf("%d\n",*(ptr+i));
		free(ptr);
	}
	return 0;
}
