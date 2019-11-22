#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int i,j;
	for(j = 1; j <= 9; j++){
		for(i = 2; i <= 5; i++) printf("%u * %u = %2u  ",i,j,i*j);
	puts("");
	}
	
	puts("");
	
	for(j = 1; j <= 9; j++){
		for(i = 6; i <= 9; i++) printf("%u * %u = %2u  ",i,j,i*j);
	puts("");
	}
	system("pause");
} 
