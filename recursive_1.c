#include <stdio.h>
#include <stdlib.h>

int fibonacci(n)
{
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
		return fibonacci(n-1)+fibonacci(n-2);
}

int main() 
{
	int n;
	printf("fibonacci dizisinin eleman sayisini gir:");
	scanf("%d",&n);
	printf("fib%d: %d",n,fibonacci(n));
	return 0;
}
