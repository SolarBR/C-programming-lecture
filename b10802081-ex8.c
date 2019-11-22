/*
Student number: B10802081
Name: Huang tengqing
File name: b10802081-ex8.c
Compiler: Dev C++
Date: 2019/11/12
*/

#include <stdio.h>
#define SIZE 100

int main(void)
{
	int n, na[SIZE] = {0};
	
	printf("Input n: ");
	scanf("%d", &n);
	
	printf("Input %d numbers: ", n);
	for(int i = 0; i < n; ++i) scanf("%d", &na[i]);
	
	int max = na[0], min = na[0];
	for(int i = 1; i < n; ++i) if(na[i] > max) max = na[i];
	for(int i = 1; i < n; ++i) if(na[i] < min) min = na[i];
	
	int sum = 0;
	double ave = 0;
	for(int i = 0; i < n; ++i) sum += na[i];
	ave = (double)sum / (double)n;
	
	printf("The largest number is %d\n", max);
	printf("The smallest number is %d\n", min);
	printf("The average is %lf\n", ave);
}
