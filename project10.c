#include <stdio.h>
#include <stdlib.h>

int toplam(int n)
{
	if(n==1)
	return n;
	else
	{
		return (n+toplam(n-1));
	}
}

int main(void) 
{
	int n;
	printf("n sayisi gir:");
	scanf("%d",&n);
	printf("1 den %d e kadar toplam:%d",n,toplam(n));
	return 0;
}
