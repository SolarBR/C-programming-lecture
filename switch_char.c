#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char choice;
	
	printf("Enter your choice(L|R):"); 
	scanf(" %c",&choice);
	
	switch(choice){
	
		case 'l':
		case 'L': printf("Left");
		break;
		
		case 'r':
		case 'R': printf("Right");
		break;
	
		default: printf("Error");
		break;
	}
}
