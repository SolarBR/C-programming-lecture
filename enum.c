#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int twodice(void);
enum status {WIN, LOSE, DRAW};
	
int main(void)
{
	int myp, comp;	
	enum status Status;
	
	srand(time(0));
	
	myp = twodice();
	comp = twodice();
	
	printf("Your point: %d\nCom's point: %d\n",myp,comp);
	
	if(myp>comp) Status = WIN;
	else if (myp<comp) Status = LOSE;
	else Status = DRAW;
	
	switch(Status){
		case WIN: printf("You win!");
		break;
		
		case LOSE: printf("You lose!");
		break;
		
		default: printf("It's a draw.");
		break;
	}
}

int twodice(void)
{
	int sum = 0;
	sum+= rand()%6+1 + rand()%6+1;
	return sum;
}
