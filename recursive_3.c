#include <stdio.h>
#include <stdlib.h>

int obeb(s1,s2){
	if(s2==0){
			return s1;
	return obeb(s2,s1%s2);
	}
} 
int okek(s1,s2){
	return s1*s2/obeb(s1,s2);
}

int main() 
{
	int sayi1,sayi2,sonuc;
	printf("iki sayi girin:");
	scanf("%d%d",&sayi1,&sayi2);
	sonuc=okek(sayi1,sayi2);
	printf("okek(%d,%d)=%d",sayi1,sayi2,sonuc);
	return 0;
}
