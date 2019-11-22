/*
Student number: B10802081
Name: Huang tengqing
File name: b10802081-hwk2-5.c
Compiler: Dev C++
Date: 2019/11/03
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wheel(void);
int turn(void);
int result(int,int);
int start(void);
int play(int,int *i);

int sum = 0;

int main(void)
{
	char name[16];
	int i=0;
	srand(time(0));
	while(1){
		printf("\n==== 冒 == 險 == 者 == 轉 == 盤 ====\n");
		printf("貴姓大名?:");
		scanf("%s", name);
		printf("%s，歡迎來到冒險者大挑戰轉盤\n", name);
	
		wheel(); 
		sum = play(start(),&i);
		printf("====================================\n");
		printf("%s的總結\n", name);
		printf("花費%d枚金幣 轉了%d次 獲得了%d樣物品\n", sum, i, sum/10);
		
		char quit;
		printf("====================================\n");
		printf("要離開轉盤了嗎(Y|N)?");
		scanf(" %c", &quit);
	
		while(quit!='Y' && quit!='y' && quit!='N' && quit!='n'){
			printf("操作有誤，請重新輸入(Y|N):");
			scanf(" %c", &quit);
		}
		
		if(quit=='y' || quit == 'Y') break;
	}
}

void wheel(void)
{
	printf("======= 獎 == 品 == 一 == 覽 =======\n");
	printf(" 1:長劍\n");
	printf(" 2:紅色藥劑\n");
	printf(" 3:止血草\n");
	printf(" 4:魔杖\n");
	printf(" 5:樂譜\n");
	printf(" 6:戰斧\n");
	printf(" 7:再轉一次\n");
	printf(" 8:藍色藥劑\n");
	printf(" 9:魯特琴\n");
	printf("10:長槍\n");
	printf("11:解毒劑\n");
	printf("12:十字弓\n");
}

int turn(void)
{
	return rand()%12+1;
}

int result(int t, int round)
{
	switch(t){
		case 1:{
			printf("恭喜您獲得一把長劍!\n");
			break;
		}
		case 2:{
			printf("恭喜您獲得一瓶紅色藥劑!\n");
			break;
		}
		case 3:{
			printf("恭喜您獲得一株止血草!\n");
			break;
		}
		case 4:{
			printf("恭喜您獲得一支魔杖!\n");
			break;
		}
		case 5:{
			printf("恭喜您獲得一份樂譜!\n");
			break;
		}
		case 6:{
			printf("恭喜您獲得一把戰斧!\n");
			break;
		}
		case 7:{
			printf("恭喜您可以再轉一次\n");
			break;
		}
		case 8:{
			printf("恭喜您獲得一瓶藍色藥劑!\n");
			break;
		}
		case 9:{
			printf("恭喜您獲得一把魯特琴!\n");
			break;
		}
		case 10:{
			printf("恭喜您獲得一支長槍!\n");
			break;
		}
		case 11:{
			printf("恭喜您獲得一管解毒劑!\n");
			break;
		}
		default:{
			printf("恭喜您獲得一把十字弓!\n");
			break;
		}
	}	
	if(t==7) return round+1;
	else return round;
}

int start(void)
{
	int round;
	printf("====================================\n");
	printf("每一轉10枚金幣，要轉幾次呢? ");
	scanf("%d", &round);
	printf("收您 %d 枚金幣，感謝您的支持\n", round*10);

	return round;
}

int play(int round, int *i)
{
	sum += round*10;
	char go, again;
	while(round>0){
		printf("====================================\n");
		printf("第 %d 次\n",*i+1);
		while(go!='Y' && go!='y'){
			printf("要開始轉了嗎(Y|N)? ");
			scanf(" %c", &go);

			while(go!='Y' && go!='y' && go!='N' && go!='n'){
				printf("操作有誤，請重新輸入(Y|N):");
				scanf(" %c", &go);
			}
		}
		round = result(turn(),round);
		--round;
		++*i;
		go = 'n';
	}
	printf("====================================\n");
	printf("是否還要再轉呢(Y|N)?");
	scanf(" %c", &again);

	while(again!='Y' && again!='y' && again!='N' && again!='n'){
		printf("操作有誤，請重新輸入(Y|N):");
		scanf(" %c", &again);
	}
	if(again=='Y' || again=='y') sum = play(start(),i);
	return sum;
}
