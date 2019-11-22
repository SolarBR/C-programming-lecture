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
		printf("\n==== �_ == �I == �� == �� == �L ====\n");
		printf("�Q�m�j�W?:");
		scanf("%s", name);
		printf("%s�A�w��Ө�_�I�̤j�D����L\n", name);
	
		wheel(); 
		sum = play(start(),&i);
		printf("====================================\n");
		printf("%s���`��\n", name);
		printf("��O%d�T���� ��F%d�� ��o�F%d�˪��~\n", sum, i, sum/10);
		
		char quit;
		printf("====================================\n");
		printf("�n���}��L�F��(Y|N)?");
		scanf(" %c", &quit);
	
		while(quit!='Y' && quit!='y' && quit!='N' && quit!='n'){
			printf("�ާ@���~�A�Э��s��J(Y|N):");
			scanf(" %c", &quit);
		}
		
		if(quit=='y' || quit == 'Y') break;
	}
}

void wheel(void)
{
	printf("======= �� == �~ == �@ == �� =======\n");
	printf(" 1:���C\n");
	printf(" 2:�����ľ�\n");
	printf(" 3:����\n");
	printf(" 4:�]��\n");
	printf(" 5:����\n");
	printf(" 6:�ԩ�\n");
	printf(" 7:�A��@��\n");
	printf(" 8:�Ŧ��ľ�\n");
	printf(" 9:�|�S�^\n");
	printf("10:���j\n");
	printf("11:�Ѭr��\n");
	printf("12:�Q�r�}\n");
}

int turn(void)
{
	return rand()%12+1;
}

int result(int t, int round)
{
	switch(t){
		case 1:{
			printf("���߱z��o�@����C!\n");
			break;
		}
		case 2:{
			printf("���߱z��o�@�~�����ľ�!\n");
			break;
		}
		case 3:{
			printf("���߱z��o�@�����!\n");
			break;
		}
		case 4:{
			printf("���߱z��o�@���]��!\n");
			break;
		}
		case 5:{
			printf("���߱z��o�@������!\n");
			break;
		}
		case 6:{
			printf("���߱z��o�@��ԩ�!\n");
			break;
		}
		case 7:{
			printf("���߱z�i�H�A��@��\n");
			break;
		}
		case 8:{
			printf("���߱z��o�@�~�Ŧ��ľ�!\n");
			break;
		}
		case 9:{
			printf("���߱z��o�@��|�S�^!\n");
			break;
		}
		case 10:{
			printf("���߱z��o�@����j!\n");
			break;
		}
		case 11:{
			printf("���߱z��o�@�޸Ѭr��!\n");
			break;
		}
		default:{
			printf("���߱z��o�@��Q�r�}!\n");
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
	printf("�C�@��10�T�����A�n��X���O? ");
	scanf("%d", &round);
	printf("���z %d �T�����A�P�±z�����\n", round*10);

	return round;
}

int play(int round, int *i)
{
	sum += round*10;
	char go, again;
	while(round>0){
		printf("====================================\n");
		printf("�� %d ��\n",*i+1);
		while(go!='Y' && go!='y'){
			printf("�n�}�l��F��(Y|N)? ");
			scanf(" %c", &go);

			while(go!='Y' && go!='y' && go!='N' && go!='n'){
				printf("�ާ@���~�A�Э��s��J(Y|N):");
				scanf(" %c", &go);
			}
		}
		round = result(turn(),round);
		--round;
		++*i;
		go = 'n';
	}
	printf("====================================\n");
	printf("�O�_�٭n�A��O(Y|N)?");
	scanf(" %c", &again);

	while(again!='Y' && again!='y' && again!='N' && again!='n'){
		printf("�ާ@���~�A�Э��s��J(Y|N):");
		scanf(" %c", &again);
	}
	if(again=='Y' || again=='y') sum = play(start(),i);
	return sum;
}
