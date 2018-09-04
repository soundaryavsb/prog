#include <stdio.h>

int main(void) {
	int n,t=1,m=1,i;
	scanf("%d",&n);
	int a[n];
	a[0]=1;
	a[1]=1;
	for(i=2;i<n;i=i+2)
	{
		t=t*2;
		a[i]=t;
	}
		for(i=3;i<n;i=i+2)
	{
		m=m*3;
		a[i]=m;
	}
/*	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}*/
		printf("%d ",a[n-1]);
	return 0;
}

