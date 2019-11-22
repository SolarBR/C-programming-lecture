#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void)
{
	int n, a[SIZE];
	srand(time(0));
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i=0; i < n; i++) a[i] = rand() % SIZE +1;
	for(int i=0; i < n; i++) printf("%d ", a[i]);
	puts("");
} 
