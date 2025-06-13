#include <stdio.h>
#include <stdlib.h>

int usalma(tbn,us){
	if(us==0) return 1;
	if(tbn==0) return 0;
	else{
		return	tbn*usalma(tbn,us-1);
	}
	
}


int main() 
{
	int us,tbn;
	printf("taban degerini girin:");
	scanf("%d",&tbn);
	printf("us degerini girin:");
	scanf("%d",&us);
	printf("%d^%d = %d",tbn,us,usalma(tbn,us));
	return 0;
}
