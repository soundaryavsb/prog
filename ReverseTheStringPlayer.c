#include <stdio.h>

int main(void) {
	
	int count=0,i;
	char string[20];
	scanf("%s",string);
	for(i=0;string[i]!='\0';i++)
	{
		count++;
	}
	for(i=count;i>=0;i--)
	{
		printf("%c",string[i]);
	}
	return 0;
}
