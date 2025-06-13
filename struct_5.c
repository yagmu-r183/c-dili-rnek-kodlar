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

int main() 
{
	
	struct ogrenci ogrenci1={"yagmur","inci",582};
	goster(ogrenci1);
	return 0;
}
