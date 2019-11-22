#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char choice, play;
	
	while(1){
		
		printf("Your choice(L|R)?");
		scanf(" %c",&choice);
		
		while(choice!='L' && choice!='l' && choice!='R' && choice!='r'){
			printf("Error.Please enter again(L|R):");
			scanf(" %c",&choice);
		}
		
		switch(choice){
			
			case 'L':
			case 'l': printf("You win!\n");
			break;
			
			case 'R': 
			case 'r': printf("You lose!\n");
			break;
			
			default: break;
		}
		
		printf("Continue to play(Y|N)?");
		scanf(" %c",&play);

		while(play!='Y' && play!='y' && play!='N' && play!='n'){
			printf("Error.Please enter again(Y|N):");
			scanf(" %c",&play);
		}	
	
		if(play=='N' || play=='n') break;
	}
}
