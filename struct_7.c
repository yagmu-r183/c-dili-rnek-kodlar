#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	
	char name[15];
	char surname[15];
	int number;
};

int main() 
{
	struct ogrenci *tut;
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.name,"yagmur");
	strcpy(ogrenci1.surname,"inci");
	ogrenci1.number=582;
	tut=&ogrenci1;
	printf("%s	%s	%d\n",ogrenci1.name,ogrenci1.surname,ogrenci1.number);
	printf("%s	%s	%d",tut->name,tut->surname,tut->number);
	return 0;
}
