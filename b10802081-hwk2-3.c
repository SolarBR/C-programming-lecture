/*
Student number: B10802081
Name: Huang tengqing
File name: b10802081-hwk2-3.c
Compiler: Dev C++
Date: 2019/10/30
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sine(double,int);
double fact(int);

int main(void)
{
	double x; int n;
	printf("Enter x, n:");
	scanf("%lf%d", &x, &n);

	printf("sin(%f) = %.20f (calculated by the C's mathematical library)\n", x, sin(x));
	printf("sin(%f) = %.20f (calculated by the approximation)\n", x, sine(x,n));
}

double sine(double x,int n)
{
	double sum=0;
	for(int i=1, sign=1; i<=2*n+1; i+=2, sign=(-sign)){
		sum+=sign*pow(x,i)/fact(i);
	}
	return sum;
}

double fact(int k){
	double sum=1;
	for(int i=1; i<=k; i++){
		sum *= i;
	}
	return sum;
}
