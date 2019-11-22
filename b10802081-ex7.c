/*
Student number: B10802081
Name: Huang tengqing
File name: b10802081-ex7.c
Compiler: Dev C++
Date: 2019/11/05
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cireqa(double,double,double,double);
void io(double,double,double,double,double,double);

int main(void)
{
	double a, b, c, d, x, y;
	printf("Enter two points:");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	
	cireqa(a, b, c, d);
	
	printf("Enter a point:");
	scanf("%lf%lf", &x, &y);
	
	io(a, b, c, d, x, y);
}

void cireqa(double a, double b, double c, double d)
{
	printf("The circle passing (%.4f,%.4f) and (%.4f,%.4f) is (x - %.4f)^2 + (y - %.4f)^2 = %.4f^2\n", a, b, c, d, (a+c)/2.0, (b+d)/2.0, sqrt((pow(a-c,2)+pow(b-d,2))/4.0));
}

void io(double a, double b, double c, double d, double x, double y)
{
	double xc, yc, r, dist;
	xc = (a+c)/2.0;
	yc = (b+d)/2.0;
	r = (pow(a-c,2)+pow(b-d,2))/4.0;
	dist = sqrt(pow(x-xc,2)+pow(y-yc,2));
	
	if(dist>r) printf("The point (%.4f,%.4f) is outside the circle.\n", x, y);
	else if(dist<r) printf("The point (%.4f,%.4f) is inside the circle.\n", x, y);
	else printf("The point (%.4f,%.4f) is on the circle.\n", x, y);
}
