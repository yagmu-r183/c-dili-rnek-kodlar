#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[15];
	char surname[15];
	int number;
	int yas;
};

int main() 
{
	struct student yagmur={"yagmur","inci",123,19};
	printf("%s  %s  %d	%d",yagmur.name,yagmur.surname,yagmur.number,yagmur.yas);
	
	return 0;
}
