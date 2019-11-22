/*
Student Number: B10802081
Name: Tengqing Huang
File Name: b10802081-hwk1-3.c
Compiler: Dev C++
Date: 2019/10/09 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(void)
{
	int a,b,c;
	
	printf("Enter the coefficients of the equation ax^2 + bx + c = 0:\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	
	float x1,x2;
	x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	if(a==0){
		printf("x = %f",(float)-c/b);
	}
	
	else if(pow(b,2) - 4*a*c > 0){
		printf("x = %f and %f",x1,x2);
	}
	
	else if(pow(b,2) - 4*a*c == 0){
		printf("x = %f",x1);
	}
	
	else{
		printf("There is no solution.");
	}
	
	system("pause");
}
