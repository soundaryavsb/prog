 #include <stdio.h>

int main(void) {
	int dd,mm,yy;
	scanf("%d/%d/%d",&dd,&mm,&yy);
	if(dd<32&&dd>0)
	{
		if(mm<13&&mm>0)
		{
		printf("yes");	
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
