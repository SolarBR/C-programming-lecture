// Student number: B10802081
// Name: Huang Tengqing
// File name: b10802081-hwk4-5.c
// Compiler: Dev C++
// Date: 2019/11/28

#include <stdio.h>
#include <string.h>
#define PLR 100
#define NAME 20
#define SET 4

unsigned int read_plr_score(char [][NAME], unsigned int [][SET]);
void plr_average(unsigned int [][SET], double [], unsigned int);
void set_average(unsigned int [][SET], double [], unsigned int);
void set_maximum(unsigned int [][SET], unsigned int [], unsigned int);
void set_minimum(unsigned int [][SET], unsigned int [], unsigned int);
void result(char [][NAME], unsigned int [][SET], double [], double [], unsigned int [], unsigned int [], unsigned int);
void bubble_sort(char [][NAME], double [], unsigned int);
void swap_no(double *, double *);
void swap_str(char [], char[]);

unsigned int itr = 0, itr2 = 0;

int main(void)
{
	char plrname[PLR][NAME] = {0};
	unsigned int score[PLR][SET] = {0}, plr_no = 0, set_max[SET] = {0}, set_min[SET] = {0};
	double plr_ave[PLR] = {0}, set_ave[SET] = {0};
	plr_no = read_plr_score(plrname, score);
	plr_average(score, plr_ave, plr_no);
	set_average(score, set_ave, plr_no);
	set_maximum(score, set_max, plr_no);
	set_minimum(score, set_min, plr_no);
	result(plrname, score, plr_ave, set_ave, set_max, set_min, plr_no);
	return 0;
}

unsigned int read_plr_score(char plrname[][NAME], unsigned int score[][SET])
{
	unsigned int plr_no = 0;
	printf("Please enter the number of players: ");
	scanf("%u", &plr_no);
	getchar();

	unsigned int len;	
	for(itr = 0; itr < plr_no; ++itr)
	{
		printf("Enter the player's name: ");
		fgets(plrname[itr], NAME, stdin);
		len = 0;
		len = strlen(plrname[itr]);
		plrname[itr][len-1] = '\0';	
		//printf("%s\n", plrname[itr]); // debug: check input
		printf("Enter the %d scores: ", SET);
		for(itr2 = 0; itr2 < SET; ++itr2) scanf("%u", &score[itr][itr2]);
		getchar();
		//for(itr2 = 0; itr2 < SET; ++itr2) printf("%u ", score[itr][itr2]); // debug: check input
	}
	return plr_no;
}

void plr_average(unsigned int score[][SET], double plr_ave[], unsigned int plr_no)
{
	double sum = 0;
	for(itr = 0; itr < plr_no; ++itr)
	{
		for(itr2 = 0; itr2 < SET; ++itr2) sum += score[itr][itr2];
		plr_ave[itr] = sum/SET;
		sum = 0;
	}
	//for(itr = 0; itr < plr_no; ++itr) printf("%.2f ", plr_ave[itr]); // debug: check calculation
}

void set_average(unsigned int score[][SET], double set_ave[], unsigned int plr_no)
{
	double sum;
	for(itr = 0; itr < SET; ++itr)
	{
		for(itr2 = 0; itr2 < plr_no; ++itr2) sum += score[itr2][itr];
		set_ave[itr] = sum/plr_no;
		sum = 0;
	}
}

void set_maximum(unsigned int score[][SET], unsigned int set_max[], unsigned int plr_no)
{
	unsigned int max;
	for(itr = 0; itr < SET; ++itr)
	{
		max = score[0][itr];
		for(itr2 = 1; itr2 < plr_no; ++itr2)
			if(score[itr2][itr] > max) max = score[itr2][itr];
		set_max[itr] = max;
		//printf("%u\n", set_max[itr]); // debug: check logic
	}
}

void set_minimum(unsigned int score[][SET], unsigned int set_min[], unsigned int plr_no)
{
	unsigned int min;
	for(itr = 0; itr < SET; ++itr)
	{
		min = score[0][itr];
		//printf("%u\n", min); // debug: check logic
		for(itr2 = 1; itr2 < plr_no; ++itr2)
			if(score[itr2][itr] < min) min = score[itr2][itr];
		set_min[itr] = min;
		//printf("%u\n", set_min[itr]); // debug: check logic
	}
}

void result(char plrname[][NAME], unsigned int score[][SET], double plr_ave[], double set_ave[], unsigned int set_max[], unsigned int set_min[], unsigned int plr_no)
{
	printf("%-16s%7s%7s%7s%7s%9s\n", "Player", "Set 1", "Set 2", "Set 3", "Set 4", "Average");
	for(itr = 0; itr < plr_no; ++itr)
	{
		printf("%-16s", plrname[itr]);
		for(itr2 = 0; itr2 < SET; ++itr2) printf("%6u ", score[itr][itr2]);
		printf("    %.2f", plr_ave[itr]);
		puts("");
	}
	
	puts("------------------------------------------------------");
	
	printf("%-16s", "Average");
	for(itr = 0; itr < SET; ++itr) printf("  %.2f", set_ave[itr]);
	puts("");
	
	printf("%-16s", "Maximum");
	for(itr = 0; itr < SET; ++itr) printf("%6u ", set_max[itr]);
	puts("");
	
	printf("%-16s", "Minimum");
	for(itr = 0; itr < SET; ++itr) printf("%6u ", set_min[itr]);
	puts("");
	
	puts("------------------------------------------------------");
	
	bubble_sort(plrname, plr_ave, plr_no);
	
	printf("%-14s%-16s %.2f\n", "First  place: ", plrname[0], plr_ave[0]);
	printf("%-14s%-16s %.2f\n", "Second place: ", plrname[1], plr_ave[1]);
	printf("%-14s%-16s %.2f\n", "Third  place: ", plrname[2], plr_ave[2]);
}

void bubble_sort(char plrname[][NAME], double plr_ave[], unsigned int plr_no)
{
	for(itr = 0; itr < plr_no; ++itr)
		for(itr2 = 0; itr2 < plr_no-1; ++itr2)
			if(plr_ave[itr2] < plr_ave[itr2+1])
			{
				swap_no(&plr_ave[itr2], &plr_ave[itr2+1]);
				swap_str(plrname[itr2], plrname[itr2+1]);
			}
}

void swap_no(double *a, double *b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_str(char a[], char b[])
{
	char temp[NAME];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
