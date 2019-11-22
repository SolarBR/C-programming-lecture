#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int sum, number;
	for(sum = 0, number = 2; number <= 100; sum += number, number += 2) {
	;
	}
	
	printf("%u",sum);
	
	system("pause");
}
