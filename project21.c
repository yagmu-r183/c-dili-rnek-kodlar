#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() 
{
	char giris[50];
	char *p;
	int i=0,k;
	p=giris;
	while(1)
	{
		*(p+i)=getch();
	
		putchar('*');
		printf("adres[%d] : %d\n",i,p+i);
		i++;
	}
	printf("\n");
	for(k=0;k<i;k++)
	{
		printf("adres[%d] : %d",k,p+k); 
		putchar(*(p+k));
	}
	getchar;
	return 0;
}
