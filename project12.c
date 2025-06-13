#include <stdio.h>
#include <stdlib.h>

long fibonacci(long n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(void) 
{
	long i,n;
	printf("sayi gir:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d sayisi:%d\n",n,fibonacci(i));
	}
	return 0;
}
