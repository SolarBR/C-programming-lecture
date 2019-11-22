/*
Student Number: B10802081
Name: Tengqing Huang
File Name: b10802081-cp6.c
Compiler: Dev C++
Date: 2019/10/08
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double a,b,c,d,area;
	printf("Enter two points (x1,y1) and (x2,y2) :");
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	
	//The line passing (a, b) and (c, d) is (b - d)x + (c - a)y = bc - ad
	
	printf("The line passing (%lf,%lf) and (%lf,%lf) is %lfx + %lfy = %lf\n",a,b,c,d,b-d,c-a,b*c-a*d);
	
	
	//與X、Y軸形成的三角形的底和高為(bc-ad)/(b-d)、(bc-ad)/(c-a) 
	
	area = (b*c-a*d)/(b-d)*(b*c-a*d)/(c-a)/2;
	
	if(area<0) area = -area;
	
	if( b-d==0 || c-a==0 || b*c-a*d==0) printf("The line does not form a triangle with x-axis and y-axis.\n");
	else printf("The triangle formed by the line, x-axis and y-axis is %lf\n",area);

	system("pause");
}
