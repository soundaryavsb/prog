#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int c;
	scanf("%s",a);
	c=strlen(a);
	for(int i=0;i<c;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%c\t",a[i]);
		}
	}
	return 0;
}
