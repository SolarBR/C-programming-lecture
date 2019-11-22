#include <stdio.h>
#define SIZE 100

int main(void)
{
	char name[SIZE][SIZE];
	unsigned int n;
	printf("Please enter the number of players: ");
	scanf("%u", &n);
	printf("Please enter player's names: ");
	for(int i=0; i<n; ++i) scanf("%s", name[i]);
	for(int i=0; i<n; ++i) printf("%s", name[i]);
}
