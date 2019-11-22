#include <stdio.h>

int main(void)
{
	char name[16];
	printf("Please enter your name:");
	scanf("%s", name);
	printf("Hello, %s.", name);
}
