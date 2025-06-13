#include <stdio.h>
#include <stdlib.h>

int a;
void fonk1(void)
{
	a=40;
	printf("a=%d\n",a);
}
int main()
{
	int a;
	a=30;
	printf("a=%d\n",a);
	fonk1();
	printf("a=%d\n",a);
	return 0;
}
