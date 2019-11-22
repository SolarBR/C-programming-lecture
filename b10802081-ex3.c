/*
Student number: B10802081 
Name: Tengqing Huang
File name: b10802081-ex3.c
Compiler: Dev C++
Date: 2019/10/01
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h,w,r;
	const double PI = 3.14159265359;
	
	printf("Enter the hight and width of a rectangle\nhight=");
	scanf("%f",&h);
	printf("width=");
	scanf("%f",&w);
	printf("The area is %f and the perimeter is %f",w*h,2*w+2*h);
	
	printf("Enter the radius of a circle\nr=");
	scanf("%f",&r);
	printf("The area is %f and the circumference is %f",PI*r*r,2*PI*r);
	
	system("pause");
}
