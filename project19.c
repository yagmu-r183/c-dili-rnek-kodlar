#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j;
	char *ilkbahar[3]={"mart","nisan","mayis"};
	char *yaz[3]={"haziran","temmuz","agustos"};
	char *sonbahar[3]={"eylul","ekim","kasim"};
	char *kis[3]={"aralik","ocak","subat"};
	char **table[4];
    table[0]=ilkbahar;
	table[1]=yaz;
	table[2]=sonbahar;
	table[3]=kis;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%s\n",table[i][j]);
		}
	}
	return 0;
}
