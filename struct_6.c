#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
	
	char isim[15];
	char soyisim[10];
	int num;
};

void goster(struct ogrenci a)
{
	printf("ogrencinin bilgileri: %s  %s  %d",a.isim,a.soyisim,a.num);
	
}

struct ogrenci degeral()
{
	
	struct ogrenci yeni;
	printf("bilgileri girin:");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,yeni.num);
	return yeni;
}

int main() 
{
	
	struct ogrenci ogrenci1= degeral();
	goster(ogrenci1);
	return 0;
}




