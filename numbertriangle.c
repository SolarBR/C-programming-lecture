#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int n;
	puts("Enter an unsigned interger(less than 6):");
	scanf("%u", &n);
	
	while(n > 5){
		puts("The entered number is too big, try again:");
		scanf("%u", &n);
	}
	
	unsigned int i,j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n - i; j++) printf(" ");
		for(j = 1; j <= 2*i - 1; j++) printf("%u",j);
	printf("\n");
	}
	
	puts("And the reversed version:");
	
	for(i = n; i >= 1; i--){
		for(j = 1; j <= n - i; j++) printf(" ");
		for(j = 1; j <= 2*i - 1; j++) printf("%u",j);
	printf("\n");
	}
	
	system("pause");
} 
