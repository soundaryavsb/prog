#include <stdio.h>
struct student
{
	char name[30];
	int roll;
	float perc;
}std,*ptr;
int main(void) {
	ptr=&std;
	scanf("%s",ptr->name);
		scanf("%d",&ptr->roll);
			scanf("%f",&ptr->perc);
			printf("name:%s\nroll number:%d\npercentage:%0.2f",ptr->name,ptr->roll,ptr->perc);
	return 0;
}
