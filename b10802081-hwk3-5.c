/*
Student Number: B10802081
Name: Huang tengqing
File name: b1082081-hwk3-5.c
Compiler: Dev C++
Date: 2019/11/07
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice(void);
int pickno(void);
char game(int, int);
void winset(char, int *, int *);

int main(void)
{	
	puts("*******************************");
	puts("*                             *");
	puts("*  Welcome to the dice game!  *");
	puts("*                             *");
	puts("*******************************");
	
	int pw = 100, cw = 100;
	printf("Player's wager: %d\n", pw);
	printf("Computer's wager: %d\n", cw);

	while(1){			
		int pcount = 0, ccount = 0;
		while(pcount<2 && ccount<2){
		
			int ppick, cpick;
			srand(time(0));	
			ppick = pickno();
			cpick = dice();
			printf("Computer picks number: %d\n", cpick);
			
			char wld;
			wld = game(cpick, ppick);
			
			if(wld=='w') ++pcount;
			if(wld=='l') ++ccount;
			
			if(pcount == 2) winset('w', &pw, &cw);
			if(ccount == 2) winset('l', &pw, &cw);
		}
	
		if(pw==0){
			puts("Player lost all wager. Game over!");
			break;
		}
		if(cw==0){
			puts("Computer lost all wager. Congratulations!");
			break;
		}
	
		char con;
		printf("Continue(Y|N)? ");
		scanf(" %c", &con);
		
		while(con!='y' && con!='Y' && con!='n' && con!='N'){
			printf("Error. Try again(Y|N)? ");
			scanf(" %c", con);
		}
		
		if(con=='n' || con=='N') break;
	}
}

int dice(void)
{
	return rand()%6+1;
}

int pickno(void)
{
	int pick;
	printf("Enter player's number(1 ~ 6):");
	scanf("%d", &pick);
	while(pick<1 || pick>6){
		printf("Error. Try agian(1 ~ 6):");
		scanf("%d", &pick);
	}
	return pick;
}

char game(int cpick, int ppick)
{
	int pdice = 0, cdice = 0;
	puts("Roll dice for both?(Press any key to roll)");
	getch();
		
	pdice = dice(); cdice = dice();	
	printf("Player dice: %d\n", pdice);
	printf("Computer dice: %d\n", cdice);
		
	int ppoint = ppick + pdice, cpoint = cpick + cdice;
	
	if(ppoint%2 == cpoint%2){
		puts(" ==> It's a draw.\n");
		return 'd';
	}
	else if(ppoint%2 ==0){
		puts(" ==> Player wins this game.\n");
		return 'w';
	}
	else{
		puts(" ==> Computer wins this game.\n");
		return 'l';
	}
}

void winset(char wl, int *pw, int *cw)
{
	if(wl == 'w'){
		puts("Player wins the set.");
		*pw += 20; *cw -= 20;
	}
	if(wl == 'l'){
		puts("Computer wins the set.");
		*cw += 20; *pw -= 20;
	}
	printf("Player's wager: %d\n", *pw);
	printf("Computer's wager: %d\n", *cw);
	puts("=======================================");
}
