#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x;
	float y;
	
	printf("Enter the first number:");
	scanf("%f",&x);
	printf("Enter the second number:");
	scanf("%f",&y);
	
	if (x>y)
	printf("%.2f is bigger than %.2f",x,y);
	
	if (y>x)
	printf("%.2f is bigger than %.2f",y,x);
	
	else
	printf("%.2f is even to %.2f",x,y);
	
	system("pause");
 } 
