/*
Student number: B10802081
Name: Huang Tengqing
File name: b10802081-cp7.c
Compiler: Dev C++
Date: 2019/10/17
*/

// 2 + (3/2) + (4/3) + (5/4) + .... + [(n + 1)/n]

#include <stdio.h>
#include <stdlib.h>

double sum(int n)
{
	double sum = 0;
	unsigned int i=1;
	
	while(i<=n){
		sum+= (double)(i + 1) / (double)i;
		++i;
	}
	
	return sum;
}

int main(void)
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("2/1 + ... + %d/%d = %f",n+1,n,sum(n));

	system("pause");
}

