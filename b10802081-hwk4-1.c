/*
Student number: B10802081
Name: Huang tengqing
File name: b10802081-hwk4-1.c
Compiler: Dev C++
Date: 2019/11/21
*/

#include <stdio.h>
#include <math.h>
#define SIZE 100

void read_points(double [], double [], unsigned int);
double dist_origin(double, double);
void bubble_sort(double [], double [], double [], unsigned int);
void print_points(double [], double [], unsigned int);

int main(void)
{	unsigned int n;
	double x[SIZE]={0}, y[SIZE]={0}, distance[SIZE]={0};
	printf("Enter the number of points: ");
	scanf("%u", &n);
	read_points(x, y ,n);
	for(int i=0; i<n; ++i) distance[i] = dist_origin(x[i], y[i]);
	bubble_sort(x, y, distance, n);
	print_points(x, y, n);
}

void read_points(double x[], double y[], unsigned int n)
{
	printf("Enter %u point(s) (x , y): ", n);
	for(int i=0; i<n; ++i) scanf("%lf%lf", &x[i], &y[i]);
}

double dist_origin(double x, double y)
{
	return sqrt(x*x + y*y);
}

void bubble_sort(double x[], double y[], double d[], unsigned int n)
{
	for(int i=0; i<n; --n)
		for(int j=0; j<n-1; ++j)
			if(d[j]>d[j+1]){
				double tempx=x[j], tempy=y[j], tempd=d[j];
				x[j] = x[j+1]; y[j] = y[j+1]; d[j]=d[j+1];
				x[j+1] = tempx; y[j+1] = tempy; d[j+1]=tempd;
			}
}

void print_points(double x[], double y[], unsigned int n)
{
	printf("The sorted points from the nearest to the farthest are as follows:\n");
	for(int i=0; i<n; i++) printf("(%.4f , %.4f)", x[i], y[i]);
	puts("");
}
