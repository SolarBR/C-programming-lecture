#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	float x;
	float y;
	float z;
	float avg;
	
	printf("Enter the first number:");
	scanf("%f",&x);
	printf("Enter the second number:");
	scanf("%f",&y);
	printf("Enter the third number:");
	scanf("%f",&z);
	avg = (x+y+z)/3;
	
	printf("\nThe average of %f ¡B %f and %f is %f",x,y,z,avg);
	system("pause");
}
