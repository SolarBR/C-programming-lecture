// Student Number: B10802081 
// Name: Huang Tengqing
// File name: b10802081-hwk3-1.c
// Compiler: Dev C++
// Date: 2019/11/22

#include <stdio.h>

int ackermann(int, int);

int main(void)
{
	int n, m;
	printf("Please input n, m: ");
	scanf("%d%d", &n, &m);
	
	printf("A(%d,%d) = %d\n", n, m, ackermann(n, m));
	return 0;
}

int ackermann(int n, int m)
{
	if(m==0) return n+1;
	else if(n==0) return ackermann(m-1, 1);
	else return ackermann(m-1, ackermann(m, n-1));

}
