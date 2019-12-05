// Student number: B10802081
// Name: Huang Tengqing
// File name: b10802081-ex11.c
// Compiler: Dev C++
// Date: 2019/12/05

#include <stdio.h>
#define ROW 50
#define COL 50

void gen_array(unsigned int [][COL], unsigned int);
void print_array(unsigned int [][COL], unsigned int);

unsigned int itr = 0, itr2 = 0;

int main(void)
{
	unsigned int ninput = 0, array[ROW][COL] = {1};
	printf("Enter n: ");
	scanf("%u", &ninput);
	gen_array(array, ninput);
	print_array(array, ninput);
}

void gen_array(unsigned int a[][COL], unsigned int n)
{
	int k = 0;
	for(itr = 0; itr < n; ++itr)
	{
		for(itr2 = 0; itr2 < n; ++itr2)
		{
			if(itr == itr2 && itr != 0) a[itr][itr2] = a[itr-1][itr2-1] + (n - k++);
			if(itr > itr2) a[itr][itr2] = a[itr-1][itr2] + 1;
			if(itr < itr2) a[itr][itr2] = a[itr][itr2-1] + 1;
		}
	}
}

void print_array(unsigned int a[][COL], unsigned int n)
{
	for(itr = 0; itr < n; ++itr)
	{
		for(itr2 = 0; itr2 < n; ++itr2)
			printf("%2u ", a[itr][itr2]);
		puts("");
	}
}
