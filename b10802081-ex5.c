/*
Student number: B10802081
Name: Huang Tengqing
File name: b10802081-ex5.c
Compiler: Dev C++
Date: 2019/10/17
*/
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(void)
{
	int n, x=1, square, cube, sum=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("  number        square          cube  sum(1+...+n)\n");
	
	while(x<=n){
	
		square = pow(x,2);
		cube = pow(x,3);
		sum+=x;
		
		printf("%8d%14d%14d%14d\n",x,square,cube,sum);

		++x;
	}
	
	system("pause");
}
