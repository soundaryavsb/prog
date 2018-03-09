#include <stdio.h>

int main(void) {
	int n;
 scanf("%d",&n);	
  int a[n],k,i,o=0,t,b;
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
   {
   	if(a[i]%2!=0)
   	{
  		o++;
  		if(o==k)
  		{
  			printf("%d\n",a[i]);
  			t=a[i];
  			b=t;
  		  		}
  		
   	}
   }
 
   	if(t==b)
  		{
  		
  		}
  		else
  		{
  			printf("the value is in valid\n");
  			}
	return 0;
}
