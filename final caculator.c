#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char grade;
	float ma,ca,f;
	int p;
	
	printf("Enter the desired grade:");
	scanf("%c",&grade);
	printf("Enter minimum average required:");
	scanf("%f",&ma);
	printf("Enter current average in course:");
	scanf("%f",&ca);
	printf("Enter how much the final counts as a percentage of the course grade:");
	scanf("%d",&p);
	
	f = 100*ma/p + ca - 100*ca/p;
	
	printf("You need a score of %.2f on the final to get a %c.",f,grade);
	system("pause");
 } 
