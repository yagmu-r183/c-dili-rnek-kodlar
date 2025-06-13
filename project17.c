#include <stdio.h>
#include <stdlib.h>

int multiply(int x,int y)
{
	if(x==1)
	return y;
	else if(x>1)
	return y+multiply(x-1,y);
}

int main() 
{
	printf("7 times 5 is %d",multiply(7,5));
	return 0;
}
