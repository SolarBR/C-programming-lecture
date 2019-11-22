#include <stdio.h>
/*
 * f(n) = (1 + 1)/1 - (2 + 1)/2 + (3 + 1)/3 - (4 + 1)/4 .... (n + 1)/n
 */ 
double f(int n)
{
	double sum = 0;
	for(int i=1;i<=n;i++){
		if(i%2 == 1) sum+=(double)(i+1)/(double)i;
		if(i%2 == 0) sum-=(double)(i+1)/(double)i; 
	}
	return sum;	
}

int main(void)
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("f(%d) = %.10f\n", n, f(n));
}
