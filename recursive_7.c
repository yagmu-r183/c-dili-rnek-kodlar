#include <stdio.h>
#include <stdlib.h>

int asalbul(n,i){
	if(n<2) return 0;
	if(i==1) return 1;
	if(n%i==0) return 0;
	return asalbul(n,i-1);
}

int main() 
{
	int n;
	printf("bir sayi girin:");
	scanf("%d",&n);
	if(asalbul(n,n/2)==0){
		printf("%d sayisi asal degildir",n);
	}
	else printf("%d sayisi asaldir",n);
	return 0;
}
