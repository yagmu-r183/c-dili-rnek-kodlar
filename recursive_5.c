#include <stdio.h>
#include <stdlib.h>

int carpma(s1,s2){
	if(s2==0){
		return 0;
	}
	return s1+carpma(s1,s2-1);
}

int main() 
{
	int s1,s2;
	printf("iki sayi giriniz:");
	scanf("%d%d",&s1,&s2);
	printf("%d * %d = %d",s1,s2,carpma(s1,s2));
	return 0;
}
