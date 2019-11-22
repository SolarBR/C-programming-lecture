#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int number = rand()%10+1 , guess = 0;
	
	printf("Guess a number(1-10):");
	
	while(guess!=number){
		scanf("%d",&guess);
		if(guess>number) printf("Too large! Try again:");
		if(guess<number) printf("Too samll! Try again:");
	}
	
	printf("Correct! The number is %d\n",number);
	
	system("pause");
} 
