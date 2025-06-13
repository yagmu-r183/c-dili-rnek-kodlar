#include <stdio.h>
#include <stdlib.h>

int kare(int i)
{
	return i*i;
}
int kup(int i)
{
	return i*i*i;
}

int main() 
{
	int (*islem)(int),i;
	char c;
	printf("1-kare alani\n2-kup hacmi\n");
	c=getchar();
	printf("\nsayiyi gir:");
	scanf("%d",&i);
	if(c=='1')
		islem=kare;
	else
		islem=kup;
	printf("sonuc:%d",islem(i));
	
	return 0;
}
