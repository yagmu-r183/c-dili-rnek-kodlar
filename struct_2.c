#include <stdio.h>
#include <stdlib.h>

struct araba{
	int tekerleksay;
	int vitessay;
	int model;
	float motor;
	int beygir;
	
}araba1,araba2;

int main() 
{
	//struct araba araba1={0}; -->boylelikle tum bilgileri sifir yapmis olursun 
	//ya da {} bu sekilde ici bossa da
	struct araba araba1 = {4,6,2023,4.0,300};
	araba2=araba1;
	printf("%d	%d	%d	%.2f  %d",araba2.tekerleksay,araba2.vitessay,araba2.model,araba2.motor,araba2.beygir);
	return 0;
}
