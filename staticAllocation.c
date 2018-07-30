#include <stdio.h>
int fun()
{
	static c=0;
	c++;
	return c;
}
int main(void) {

	printf("%d\n",fun());
	printf("%d",fun());
	return 0;
}



*/o/p:
1
2 */
