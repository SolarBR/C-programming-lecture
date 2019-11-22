/*
Student number: B10802081
Name: Huang tengqing
File name: b10802081-hwk2-1.c
Compiler: Dev C++
Date: 2019/10/29
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		for(int j = n - i; j >= 1; j--) printf(" ");
		for(int j = i; j >= 1; j--) printf("%d",j);
		for(int j = 2; j <= i; j++) printf("%d",j);
		puts("");
	}
	
	for(int i = n - 1; i >= 1; i--){
		for(int j = 1; j <= n - i; j++) printf(" ");
		for(int j = i; j >= 1; j--) printf("%d",j);
		for(int j = 2; j <= i; j++) printf("%d",j);
		puts("");
	}
}
