#include <stdio.h>
#include <stdlib.h>

int sum(int num)
{
	if(num!=0)
	return (num%10+sum(num/10));
	else
	return 0;
}

int main() 
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("sum of digits in %d is %d",num,sum(num));
	return 0;
}
