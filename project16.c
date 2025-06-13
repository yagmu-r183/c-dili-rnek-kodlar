#include <stdio.h>
#include <stdlib.h>

int sum(int dizi[],int n)
{
	if(n==0)
		return dizi[0];
	return dizi[n]+sum(dizi,n-1);
}

int main() 
{
	int n=5,dizi[5]={3,7,2,9,1};
	int toplam=sum(dizi,n-1);
	printf("toplam = %d",toplam);
	return 0;
}
