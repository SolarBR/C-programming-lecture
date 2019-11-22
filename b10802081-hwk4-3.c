// Student number: B10802081
// Name: Huang Tengqing
// File name: b10802081-hwk4-3.c
// Compiler: Dev C++
// Date: 2019/11/22

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 98
#define CONST 2
#define COM 0
#define PLR 1

unsigned int set_max(void);
void gen_unrpt_no(unsigned int [], unsigned int);
void print_arr(unsigned int [], unsigned int);
void slct_no(unsigned int [], unsigned int [], unsigned int);
void shdw_arr(unsigned int [], unsigned int [], unsigned int);
void cclt_point(unsigned int [], unsigned int [], unsigned int[]);
void sum(unsigned int[]);

int main(void)
{
	unsigned int max_no, no_arr[MAX]={0}, shade[MAX]={0}, slct[CONST]={0}, point[CONST]={0};
	
	max_no = set_max();
	srand(time(0));	
	gen_unrpt_no(no_arr, max_no);
	shdw_arr(no_arr, shade, max_no);
	for(unsigned int itr=1; itr<=max_no/2; ++itr){
		slct_no(shade, slct, max_no);
		shdw_arr(no_arr, shade, max_no);
		cclt_point(no_arr, slct, point);
	}
	sum(point);
}

unsigned int set_max(void)
{
	unsigned int n;
	printf("Please enter the maximum even number of this game(2 - 98): ");
	scanf("%u", &n);
	while(1){
		if(n > MAX || n < 2 || n % 2 == 1) printf("Error. Try again: ");
		else break;
		scanf("%u", &n);
	}
	return n;
}

void gen_unrpt_no(unsigned int no_arr[], unsigned int max_no)
{
	for(unsigned int itr=1; itr<=max_no; ++itr){
		no_arr[itr] = rand() % max_no +1;
		for(unsigned int subitr=0; subitr<itr; ++subitr){
			if(no_arr[itr] == no_arr[subitr]){
				--itr; break;
			}
		}
	}
}

void print_arr(unsigned int no_arr[], unsigned int max_no)
{
	for(unsigned int itr=0; itr<max_no; ++itr) printf("%3d", no_arr[itr]);
	puts("");
}

void shdw_arr(unsigned int no_arr[], unsigned int shade[], unsigned int max_no)
{
	puts("");
	for(unsigned int itr=1; itr<=max_no; ++itr) shade[itr] == 0 ? printf("[**] ") : printf("[%2u] ",no_arr[itr]);
	puts("");
	puts("");
}

void slct_no(unsigned int shade[], unsigned int slct[], unsigned int max_no)
{
	printf("Select your number: ");
	scanf("%u", &slct[PLR]);
	while(1){
		if(shade[slct[PLR]] == 1) printf("You cannot select the number which has already been shown. Try again: ");
		else break;
		scanf("%u", &slct[PLR]);
	}
	shade[slct[PLR]] = 1;
	
	while(1){
		slct[COM] = rand() % max_no + 1;
		if(shade[slct[COM]]==0) break;
	}
	shade[slct[COM]] = 1;
}

void cclt_point(unsigned int no_arr[], unsigned int slct[], unsigned int point[])
{	
	if(no_arr[slct[PLR]] > no_arr[slct[COM]]){
		printf("The player wins %u points.\n", no_arr[slct[PLR]]+no_arr[slct[COM]]);
		point[PLR] += no_arr[slct[PLR]] + no_arr[slct[COM]];
	}
	
	else{
		printf("The computer wins %u points.\n", no_arr[slct[PLR]]+no_arr[slct[COM]]);
		point[COM] += no_arr[slct[PLR]] + no_arr[slct[COM]] ;
	}
	puts("");
}

void sum(unsigned int point[])
{
	printf("  Player total: %4u\n", point[PLR]);
	printf("Computer total: %4u\n", point[COM]);	
	point[PLR] > point[COM] ? printf("Player wins the game.\n") : printf("Computer wins the game.\n") ;
}



