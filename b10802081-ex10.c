// Student number: B10802081
// Name: Huang Tengqing
// File name: b10802081-ex10.c
// Compiler: Dev C++
// Date: 2019/11/26

#include <stdio.h>
#include <math.h>
#define STUD 100
#define RANGE 10

void read_score(double [], unsigned int);
void count_range(double [], unsigned int [], unsigned int);
void print_range(unsigned int [], unsigned int);
double average(double [], unsigned int);

unsigned int itr = 0;

int main(void)
{
	double score[STUD] = {0};
	unsigned int n, range[RANGE] = {0};
	
	printf("Enter n: ");
	scanf("%u", &n);
	read_score(score, n);
	count_range(score, range, n);
	print_range(range, n);
	printf("The class average is %.2f\n", average(score, n));
}

void read_score(double score[], unsigned int n)
{
	printf("Enter %u scores: ", n);
	for(itr = 0; itr < n; ++itr) scanf("%lf", &score[itr]);
}

void count_range(double score[], unsigned int range[], unsigned int n)
{
	unsigned int compare[10] = {0,1,2,3,4,5,6,7,8,9};
	for(itr = 0; itr < n; ++itr)
		for(int i = 0; i < 10; ++i)
		{
			if(score[itr] == 100) 
			{
				++range[9];
				break;
			}
			else if(floor(score[itr]/10) == compare[i]) ++range[i];
		}
}

void print_range(unsigned int range[], unsigned int n)
{
	unsigned int x1 = 0, x2 = 9;
	for(itr = 0; itr < 9; ++itr, x1+=10, x2+=10)
	{
		printf("%2u - %3u:%3u", x1, x2, range[itr]);
		for(int i = 0; i < range[itr]; ++i) printf("*");
		puts("");
	}
	
	printf("90 - 100:%3u", range[9]);
	for(itr = 0; itr < range[9]; ++itr) printf("*");
	puts("");
}

double average(double score[], unsigned int n)
{
	double sum = 0;
	for(itr = 0; itr < n; ++itr) sum += score[itr];
	return sum/n;
}
