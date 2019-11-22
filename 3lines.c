#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float a1 , b1 , c1 , a2 , b2 , c2 , a3 , b3 , c3;
	
	printf("Enter the coefficients of the functions ax+by=c, dx+ey=f, gx+hy=i\na=");
	scanf("%f",&a1);
	
	printf("b=");
	scanf("%f",&b1);
	
	printf("c=");
	scanf("%f",&c1);
	
	printf("d=");
	scanf("%f",&a2);
	
	printf("e=");
	scanf("%f",&b2);
	
	printf("f=");
	scanf("%f",&c2);
	
	printf("g=");
	scanf("%f",&a3);
	
	printf("h=");
	scanf("%f",&b3);
	
	printf("i=");
	scanf("%f",&c3);
	
	double x1 , y1 , x2 , y2 , x3 , y3;
	
	x1 = (b2*c1-b1*c2)/(a1*b2-a2*b1);
	y1 = (a2*c1-a1*c2)/(a2*b1-a1*b2);
	
	x2 = (b3*c1-b1*c3)/(a1*b3-a3*b1);
	y2 = (a3*c1-a1*c3)/(a3*b1-a1*b3);
	
	x3 = (b3*c2-b2*c3)/(a2*b3-a3*b2);
	y3 = (a3*c2-a2*c3)/(a3*b2-a2*b3);
	
	printf("The point of intersection of %fx+%fy=%f and %fx+%fy=%f is (%lf,%lf)\n",a1,b1,c1,a2,b2,c2,x1,y1);
	printf("The point of intersection of %fx+%fy=%f and %fx+%fy=%f is (%lf,%lf)\n",a1,b1,c1,a3,b3,c3,x2,y2);
	printf("The point of intersection of %fx+%fy=%f and %fx+%fy=%f is (%lf,%lf)\n",a2,b2,c2,a3,b3,c3,x3,y3);
	
	double s1 , s2 , s3 , s , area;
	
	s1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	s2 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	s3 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	s = (s1+s2+s3)/2;
	area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
	
	printf("The lenth of three sides of the triangle formed by the three lines entered is %lf , %lf and %lf\nThe area of the triangle is %lf",s1,s2,s3,area);
	
	system("pause");
}
