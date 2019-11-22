/*
Student number: B10802081
Name: Huang Tengqing
File name: b10802081-ex6.c
Compiler: Dev C++
Date: 2019/10/24
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(int i = 1 ; i <= n ; i++){
		for(int l = n - i ; l >= 1 ; l--) printf(" ");
		for(int j = 1 ; j <= i ; j++) printf("%d",j);
		for(int k = i - 1 ; k >= 1 ; k--) printf("%d",k);
		puts("");
	}
	for(int i = n - 1 ; i >= 1 ; i--){
		for(int p = 1 ; p <= n-i ; p++) printf(" ");
		for(int m = 1 ; m <= i ; m++) printf("%d",m);
		for(int o = i - 1 ; o >= 1 ; o--) printf("%d",o);
		puts("");
	}
}
