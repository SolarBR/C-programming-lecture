// Student number: B10802081
// Name: Huang Tengqing
// File name: b10802081-hwk3-3.c
// Compiler: Dev C++
// Date: 2019/11/22

#include <stdio.h>
#include <math.h>

//y(x)  = ax^3 + bx^2 + cx + dsin(x) + e
//y(x)' = 3ax^2 + 2bx + c + dcos(x)
double equation_value(double, double, double, double, double, double);
double find_root(double, double, double, double, double, double);
double derivative_value(double, double, double, double, double);

int main(void)
{
	double a, b, c, d, e, x, root1, root2, root3;
	printf("Enter the coefficients of ax^3 + bx^2 + cx + dsin(x) + e and x: ");
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &x);
	printf("The equation is y(x) = %.4fx^3 + %.4fx^2 + %.4fx + %.4fsin(x) + %.4f\n", a, b, c, d, e);
	printf("y(%.4f) = %.4f\n", x, equation_value(a,b,c,d,e,x));

	root1 = find_root(a,b,c,d,e,0);
	
	double x1 = -100;
	for(unsigned int itr=1; itr<=100; ++itr, x1-=10){
		root2 = find_root(a,b,c,d,e,x1);
		if(root1!=root2) break;
	}
	
	x1 = 100;
	if(root1==root2)
		for(unsigned int itr=1; itr<=100; ++itr, x1+=10){
			root2 = find_root(a,b,c,d,e,x1);
			if(root1!=root2) break;
	}
	
	double x2 = 100;
	for(unsigned int itr=1; itr<=100; ++itr, x2+=10){
		root3 = find_root(a,b,c,d,e,x2);
		if(root3!=root1 && root3!=root2) break;
	}
	
	x2 = -100;
	if(root3==root1 || root3==root2)
		for(unsigned int itr=1; itr<=100; ++itr, x2-=10){
			root2 = find_root(a,b,c,d,e,x1);
			if(root3!=root1 && root3!=root2) break;
	}
	
	if(root1==root2 && root2==root3) printf("There is only one root %.4f", root1);
	else printf("The roots are %.4f, %.4f and %.4f", root1, root2, root3);
}

double equation_value(double a, double b, double c, double d, double e, double x)
{
	return a*pow(x,3) + b*pow(x,2) + c*x +d*sin(x) + e;
}

double find_root(double a, double b, double c, double d, double e, double x)
{
	for(unsigned int itr=1; itr<=100; ++itr) x -= equation_value(a,b,c,d,e,x)/derivative_value(a,b,c,d,x);
	return x;
}

double derivative_value(double a, double b, double c, double d, double x)
{
	return 3*a*pow(x,2) + 2*b*x + c + d*cos(x);
}
