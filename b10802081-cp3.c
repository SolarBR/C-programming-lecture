/*
Student number: B10802081
Name: Tengqing Huang
File name: b10802081-cp3.c
Compiler: Dev C++
Date: 2019/10/01
*/

#include <stdio.h>
#include <stdlib.h>

/*	
�����q����(BMI) (kg/m^2)
�魫�L�� BMI �� 18.5
���`�d�� 18.5��BMI��24
���`�d��
   �L���G24��BMI��27
   ���תέD�G27��BMI��30
   ���תέD�G30��BMI��35
   ���תέD�GBMI��35�@
*/

int main(void)
{
	float h,w;
	
	printf("Enter your height(cm):");
	scanf("%f",&h);
	printf("Enter your weight(kg):");
	scanf("%f",&w);
	
	float bmi = 10000*w/h/h;
	
	printf("Your BMI is %f.\n",bmi);
	
	if(bmi<18.5){
		printf("You are a little too light, eat more.\n");
	}
	
	else if (bmi>=18.5 && bmi<24){
		printf("You are in great shape, keep on.\n");
	}
	
	else{
		printf("You are too heavy, do some exercise when you have time.\n");
	}
	
	system("pause");
}
