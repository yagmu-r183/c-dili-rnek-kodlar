#include <stdio.h>
#include <stdlib.h>

int bolme(x,y){
	if(y==0){
		return 0;
	}
	if(x-y==0){
		return 1;
	}
	if(x<y){
		return 0;
	}
	return 1+bolme(x-y,y);
	
}

int main() 
{
	int x,y;
	printf("iki sayi girin:");
	scanf("%d%d",&x,&y);
	printf("%d/%d = %d",x,y,bolme(x,y));
	return 0;
}
