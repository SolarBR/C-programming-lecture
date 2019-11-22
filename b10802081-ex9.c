/*
Student number: B10802081
Name: Huang tengqing
File name: b10802081-ex9.c
Compiler: Dev C++
Date: 2019/11/12
*/

#include <stdio.h>
#define SIZE 100

int menu(void);
void readarray(void);
void printarray(void);
void quadratic(int[]);

int n,array[SIZE] = {0};

int main(void)
{
	while(1){
		int option = menu();
		switch(option){
			case 1:{
				readarray();
				break;
			}
		
			case 2:{
				printarray();
				break;
			}
			
			case 3:{
				quadratic(array);
				break;
			}
			
			case 4: break;
			
			default:{
				printf("Error!\n");
				break;
			}
		}
		if(option==4){
			printf("Ending the program...");
			break;
		}
	}
}

int menu(void)
{
	int option;
	
	puts("*******************************************");
	puts("1.Read an array");
	puts("2.Print an array");
	puts("3.Caculate the quadratic mean of an array");
	puts("4.Exit");
	puts("*******************************************");
	printf("==> ");
	scanf("%d", &option);
	
	return option;
}

void readarray(void)
{
	printf("Input n: ");
	scanf("%d", &n);
	printf("Input %d numbers: ", n);
	for(int i = 0; i < n; ++i) scanf("%d", &array[i]);
}

void printarray(void)
{
	printf("%7s%13s\n", "Element", "Value");
	for(int i = 0; i < n; ++i) printf("array[%d]%13d\n", i, array[i]);
}

void quadratic(int array[])
{
	int sum = 0;
	for(int i = 0; i < n; ++i) sum += (array[i]*array[i]);
	printf("The quadratic mean of the array is %lf\n", (double)sum / n);
}
