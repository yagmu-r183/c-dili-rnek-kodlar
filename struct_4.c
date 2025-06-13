#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
	char isim[15];
	char soyisim[15];
	int num;
};


int main()
{
	struct ogrenci ogrenciler[3];
	int i;
		for(i=0;i<3;i++)
		{
			printf("%d. ogrencinin isim ,soyisim, numara bilgilerini gir:",i+1);
			scanf("%s	%s	%d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].num);
		}
		
		printf("\n\n");
	
		for(i=0;i<3;i++)
		{
			printf("%d. ogrenci bilgileri:",i+1);
			printf("%s	%s	%d\n\n",ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].num);
		}
	return 0;
}






