#include <stdio.h>

	struct student
	{
	char name[20]	;
	int roll_no;
	float percentage;
	}s[1];
	int main(void) {
		int i;
		for(i=0;i<1;i++)
		{
			scanf("%s",s[i].name);
			scanf("%d",&s[i].roll_no);
			scanf("%f",&s[i].percentage);
		}
		for(i=0;i<1;i++)
		{
			printf("%s\n",s[i].name);
			printf("%d\n",s[i].roll_no);
			printf("%0.1f\n",s[i].percentage);
		}
	return 0;
}
