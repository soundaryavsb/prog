#include <stdio.h>

int main(void) {
	int n;
 scanf("%d",&n);	
  int a[n],k,i,count=0;
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
   {
   	if(a[i]==k)
   	{
   		count++;
   	}
   }
   if(count>0)
   {
   	printf("yes");
   }
   else
   {
   	printf("no");
   }
	return 0;
}
