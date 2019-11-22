/*
Student Number: B10802081
Name: Tengqing Huang
File Name: b10802081-ex2.c
Compiler: Dev C++
Date: 2019/09/26
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double a,b,c,d,e,area;
	printf("Enter the coefficients of ax+by=c\na=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	
	//與X、Y軸形成的三角形三邊長為 c/a、c/b、根號(c/a)^2+(c/b)^2
	d = sqrt(pow(c/a,2)+pow(c/b,2));
	e = c/a+c/b+d;
	area = c/a*c/b/2; 
	
	//防呆
	if(a==0&&b!=0&&c!=0) printf("The line %lfy=%lf is a horizontal line which does not form a triangle with x-axis and y-axis.",b,c);
	else if(a==0&&b!=0&&c==0) printf("The line %lfy=0 is x-axis which does not form a triangle with y-axis.",b);
	else if(a!=0&&b==0&&c!=0) printf("The line %lfx=%lf is a vertical line which does not form a triangle with x-axis and y-axis.",a,c);
	else if(a!=0&&b==0&&c==0) printf("The line %lfx=0 is y-axis which does not form a triangle with x-axis.",a);
	else if(a!=0&&b!=0&&c==0) printf("The line %lfx+%lfy=0 is a line contains point (0,0) which does not form a triangle with x-axis and y-axis.",a,b);
	else if(a==0&&b==0) printf("The line 0=%lf does not exist.",c);
	//輸出計算結果 
	else printf("The line is %lfx+%lfy=%lf. Area formed by the line, x-axis and y-axis is %lf.\nThe perimeter of the triangle is %lf",a,b,c,area,e);
	
	system("pause");
}
