/*
Student Number: B10802081
Name: Tengqing Huang
File Name: b10802081-hwk1-2.c
Compiler: Dev C++
Date: 2019/10/09
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("�w��Ө�_�I�̳c���\n");
	
	int genre = 6, total = 0, selection = 13, coin = 0, inserted = 0;
	char yn = 'n';
	
	while(1){
	printf("\n�п�ܷQ�ʶR�����~����:\n\n1.�Z��\n\n2.����\n\n3.���ӫ~\n\n4.�]�k�D��\n\n5.�ħL����\n\n0.�����ʪ�\n\n");
	if(inserted>0) printf("(�z�w��J%d�T����)\n(�����ʪ��Y�i���X�h��)\n",inserted);
	scanf("%d",&genre);
	
	if(genre == 0){
		if(inserted>0){
			printf("*�A�q�h���f���X�F%d�T����*",inserted);
			inserted = 0;
		}
		printf("\n�P�±z�����{�A�z�������ʪ��`���B��%d�����A�w��U���A�ӡC",total);
		break;
	}

	while(genre<1 || genre>=6){
	printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n\n");
	scanf("%d",&genre);
	}
	
	switch(genre){
	case 5:{
		while(1){
		printf("\n�п�ܷQ���Ϊ��ħL¾�~:\n01.�Ԥh(5G) �@�@02.�u�@��(4G) �@03.�Z��(6G) �@�@\n04.�t����(5G) �@05.�g��(4G)�@�@ 06.���h(6G) �@�@\n07.�]�k�v(6G) �@08.�l��v(6G)�@ 09.�_�N�v(6G)�@ \n10.���x(5G)�@ �@11.�u�C�֤H(6G) 12.�Ҫ��N�h(6G)\n\n�^��������Ы�0\n");
		if(inserted>0) printf("(�z�w��J%d�T����)",inserted);
		printf("\n\n");
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){
			
			case 12:{
				printf("�Ҫ��N�h�O�վǦh�D���Ǫ̡A\n�H�j�j�����ѭI������޻s�@�U�عD��A\n�䤤�H���ܪZ�����ݩʳ̨�N��ʡA\n�t�X�L�̬ݬ�z�I�����ѡA\n��������a��䤣�ơA\n�O�S�������U¾�~�C\n\n�O�_�n�H6���������涱�ηҪ��N�h?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���ηҪ��N�h?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�Ҫ��N�h�����ī���*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}
			
			case 11:{
				printf("�u�C�֤H���q���i�h�ӰۡA\n���������h�𦳪��v¡�H�ߡA\n�b�Գ��W�L�̳z�L���ֱa�ӦU���U�ˤ��P���ĪG�A\n�ǥH�޵o���ͪ����Ͼ԰��ܪ���e���A\n�O�W�q�������U¾�~�C\n\n�O�_�n�H6���������涱�Χu�C�֤H?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���Χu�C�֤H?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�u�C�֤H�����ī���*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}

			case 10:{
				printf("���x�@���P�����q�������H�A\n����޵o���ݪv¡���ͩάO���H�O�@�A\n�]�ժ��гy���P�����a�ӳ��a�u�աA\n���~�W��`�������̦w���]�O���x�u�@���@���A\n�O�H�^�_��O���������U¾�~�C\n\n�O�_�n�H5���������涱�ί��x?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���ί��x?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F���x�����ī���*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}

			case 9:{
				printf("�_�N�v��q�U���۳N�A\n�ᤩ�U����q�ĪG�A\n�]����ޱ��ؼ����ĤH�۶ð}�}�A\n�������~�]�ժ��ϥζ·t�]�k�A\n�άO�H�]�O�]�m�a�p�A\n�]��N�`���������]�O�����L�H�A\n�O���U���]�k��X¾�~�C\n\n�O�_�n�H6���������涱�Ω_�N�v?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���Ω_�N�v?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�_�N�v�����ī���*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 8:{
				printf("�l��v�i�H�P�L�Hñ�q�����A\n�b�԰����l�ꤣ�P���ͪ��P���~��U�@�ԡA\n�̾ڥl�ꪺ���P�i�H�O��d�x���Ԥh�A\n�άO���a�]�k���]�k�v�A\n�]�i�H�O�O�@�ͭx�����U����A\n�O���૬��¾�~�C\n\n�O�_�n�H6���������涱�Υl��v?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���Υl��v?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�l��v�����ī���*\n");
						inserted-=6;
						total+=6;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("�]�k�v�������]�k����������ϼĤH�ǭ��Ϸ��A\n�L�̥i�H�ۥѾ��a���K�B�H�B�H�ΰ{�q�T�ؤ����A\n�]���D�p�󩵦��������O�q�ϼĤH���J���`���A�A\n�O�������]�k��X¾�~�C\n\n�O�_�n�H6���������涱���]�k�v?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�����]�k�v?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�]�k�v�����ī���*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 6:{
				printf("���h�H�ĤG��Z���N���޵P�A\n�i�m�X�F��ʯ몺�i��ޥ��A\n���~���԰��g�����ֳt�ݬ�ĤH���z�I�A\n�i�ӧ�䤣�ơC\n�L�̪��԰��N���@����R���R�A\n�ݩ󰪤��O��Կ�X¾�~�C\n\n�O�_�n�H6���������涱�ΰ��h?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���ΰ��h?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F���h�����ī���*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}
			
			case 5:{
				printf("�g���q�U�����{�Z���A\n�M���q���B�o�_�����A\n�ھڤ⤤�L�������P�A\n��������P�R��������A\n�]�ন�����˼ĤH��Ѵx���������L�A\n�O�����O�����{��X¾�~�C\n\n�O�_�n�H4���������涱�ήg��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���ήg��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(����ʽжR��0)�Ч�J%d�T����:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=4){
						printf("\n*�A�q�c����������f���X�F�g�⪺���ī���*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}

			case 4:{
				printf("�t���̾ժ��q�t�B�o�_�_ŧ�A\n�έP�R���t���B�u�M�M�r�Ĺܨ��ؼЪ��ͩR�A\n�J��M�I�ɤ]�i�H��J�v���Ӹ��ק����A\n�p�����@�믫�X���S�A\n�O����������X¾�~�C\n\n�O�_�n�H5���������涱�ηt����?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���ηt����?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
					printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F�t���̪����ī���*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}

			case 3:{
				printf("�Z�����۰�w���N�ӡA\n�ײ��ܤƲ��������k�A\n�@���X���A�֦��H��ġA\n���骺����y�N�F��H���^�_��O�A\n�B��������]��ۥѬ���İ}�A\n�O��u�@�骺���ū�¾�~�C\n\n�O�_�n�H6���������涱�ΪZ��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���ΪZ��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�Z�������ī���*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 2:{
				printf("�u�@�̪��j�ޥi�H�j���j�q���ˮ`�A\n�O�@���᪺�٦�A\n�]����N���ͩӨ����ˮ`�ಾ���ۤv�A\n���n�ɧ���|�_�޵P���w�ĤH�C\n�z�L�V�m����o���`���A���ܩʡA\n�O�����K���몺�Z�J¾�~�C\n\n�O�_�n�H4���������涱�Φu�@��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���Φu�@��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(����ʽжR��0)�Ч�J%d�T����:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=4){
						printf("\n*�A�q�c����������f���X�F�Z�������ī���*\n");
						inserted-=4;
						total+=4;	
					}
				}
				break;
			}
			
			case 1:{
				printf("�Ԥh����ۥѨϥΦU�ت�ԪZ�����X���B�ˮ`�A\n�ժ��H�����@�����u�A\n�����ӥǪ��ĤH���Y�h���A\n�g�L�V�m�]����B�μC�𰵥X���{�]�k�ˮ`�A\n�O�۷��������X¾�~�C\n\n�O�_�n�H5���������涱�ξԤh?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n���ξԤh?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F�Ԥh�����ī���*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}
			
			default: break;
			}
		}
	break;
	}
	
	case 4:{
		while(1){
		printf("\n�п�ܷQ�ʶR���]�k�D��:\n01.���y���b(3G)�@�@ 02.�p�����b(3G)�@�@ 03.�ɭ������b(5G)�@ 04.���b���b(3G)\n05.�v¡�������b(6G) 06.�b�ƨ��b(4G)�@�@ 07.�^�a���b(3G) �@�@08.�A�Ͷ���(8G)\n09.�]�N����(8G)�@ �@10.�Ť�Y��(10G)�@  11.�����@��(9G)�@ �@12.�_���@��(8G)\n\n�^��������Ы�0\n");
		if(inserted>0) printf("(�z�w��J%d�T����)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 12:{
				printf("�_���@�ů൹���t���̯����[�@�A�Ϩ�K�̥ۤƤζA�G�C\n\n�O�_�n�H8�����������ʶR�_���@��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�_���@��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<8){
						printf("(����ʽжR��0)�Ч�J%d�T����:",8-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=8){
						printf("\n*�A�q�c����������f���X�F�_���@��*\n");
						inserted-=8;
						total+=8;	
					}
				}
			break;
			}
			
			case 11:{
				printf("�����@�ŵ����t���̤T�j�������˩M�O�A�Ϩ�K�̿U�N�B�ᵲ�γ·��C\n\n�O�_�n�H9�����������ʶR�����@��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�����@��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<9){
						printf("(����ʽжR��0)�Ч�J%d�T����:",9-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=9){
						printf("\n*�A�q�c����������f���X�F�����@��*\n");
						inserted-=9;
						total+=9;	
					}
				}
			break;
			}

			case 10:{
				printf("�Ť�Y��ണ���t���̪��]�k�A�ʡA�����]�O�ɦ��@�w���v���ٵ��q�]�O�C\n\n�O�_�n�H10�����������ʶR�Ť�Y��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�Ť�Y��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<10){
						printf("(����ʽжR��0)�Ч�J%d�T����:",10-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=10){
						printf("\n*�A�q�c����������f���X�F�Ť�Y��*\n");
						inserted-=10;
						total+=10;	
					}
				}
			break;
			}

			case 9:{
				printf("�]�N�����ണ���t���̪��]�O�j�סA�W�j�I�i���k�N�ˮ`�C\n\n�O�_�n�H8�����������ʶR�]�N����?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�]�N����?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<8){
						printf("(����ʽжR��0)�Ч�J%d�T����:",8-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=8){
						printf("\n*�A�q�c����������f���X�F�]�N����*\n");
						inserted-=8;
						total+=8;	
					}
				}
			break;
			}

			case 8:{
				printf("�A�Ͷ����������t���̪��ͩR�O�A�Ϩ�C�j�@�q�ɶ��N��^�_�ͩR�ȡC\n\n�O�_�n�H8�����������ʶR�A�Ͷ���?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�A�Ͷ���?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<8){
						printf("(����ʽжR��0)�Ч�J%d�T����:",8-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=8){
						printf("\n*�A�q�c����������f���X�F�A�Ͷ���*\n");
						inserted-=8;
						total+=8;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("�^�a���b�W�x�s���]�k������ϥΪ̦^����w���w���ϰ�C\n\n�O�_�n�H3�����������ʶR�^�a���b?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�^�a���b?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F�^�a���b*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 6:{
				printf("�b�ƨ��b�W�x�s�F���x�����֡A���ϥΪ̥i�H�I�i�@���u�b�ơv�Ӯ������`���A�C\n\n�O�_�n�H4�����������ʶR�b�ƨ��b?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�b�ƨ��b?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(����ʽжR��0)�Ч�J%d�T����:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*�A�q�c����������f���X�F�b�ƨ��b*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("�v¡�������b�W�x�s�F���x�����t�k�N�A���ϥΪ̥i�H�I�i�@���u�v¡�����v�Ӫv¡�P�򪺹٦�C\n\n�O�_�n�H6�����������ʶR�v¡�������b?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�v¡�������b(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�v¡�������b*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}

			case 4:{
				printf("���b���b�W�x�s�F�����]�O�A���ϥΪ̥i�H�I�i�@���u���b�v�����ĤH�C\n\n�O�_�n�H3�����������ʶR���b���b?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���b���b?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
					printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F���b���b*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 3:{
				printf("�ɭ������b�W�x�s�F�B���]�O�A���ϥΪ̥i�H�I�i�@���u�ɭ����v�����ĤH�C\n\n�O�_�n�H5�����������ʶR�ɭ������b?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�ɭ������b?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F�ɭ������b*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}

			case 2:{
				printf("�p�����b�W�x�s�F�p���]�O�A���ϥΪ̥i�H�I�i�@���u�p���v�����ĤH�C\n\n�O�_�n�H3�����������ʶR�p�����b?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�p�����b?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F�p�����b*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}
			
			case 1:{
				printf("���y���b�W�x�s�F�����]�O�A���ϥΪ̥i�H�I�i�@���u���y�v�����ĤH�C\n\n�O�_�n�H3�����������ʶR���y���b?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���y���b?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F���y���b*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}
			
			default: break;
			}	
		}
	break;
	}
	
	case 3:{
		while(1){
		printf("\n�п�ܷQ�ʶR�����ӫ~:\n1.�����ľ�(1G)  2.�~���ĻI(2G)  3.�����ľ�(3G)�@ 4.����(1G)\n5.�Ŧ��ľ�(2G)  6.�����ľ�(4G)  7.�����ľ�(6G) �@8.�Ѭr��(1G)\n\n�^��������Ы�0\n");
		if(inserted>0) printf("(�z�w��J%d�T����)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=9){
				printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 8:{
				printf("�Ѭr���i�H�Ѱ����r���A�C\n\n�O�_�n�H1�����������ʸѬr��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�Ѭr��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
						printf("(����ʽжR��0)�Ч�J%d�T����:",1-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=1){
						printf("\n*�A�q�c����������f���X�F�Ѭr��*\n");
						inserted-=1;
						total+=1;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("�����ľ��i�H�^�_�j�q���]�O�C\n\n�O�_�n�H6�����������ʶR�����ľ�?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�����ľ�?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�����ľ�*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 6:{
				printf("�����ľ��i�H�^�_�]�O�C\n\n�O�_�n�H4�����������ʶR�����ľ�?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�����ľ�?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(����ʽжR��0)�Ч�J%d�T����:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*�A�q�c����������f���X�F�����ľ�*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("�Ŧ��ľ��i�H�^�_�ֶq���]�O�C\n\n�O�_�n�H2�����������ʶR�Ŧ��ľ�?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�Ŧ��ľ�(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(����ʽжR��0)�Ч�J%d�T����:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=2){
						printf("\n*�A�q�c����������f���X�F�Ŧ��ľ�*\n");
						inserted-=2;
						total+=2;	
					}
				}
			break;
			}

			case 4:{
				printf("����i�H�Ѱ��X�媬�A�æ^�_�L�q�ͩR�C\n\n�O�_�n�H1�����������ʤ���?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR����?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
					printf("(����ʽжR��0)�Ч�J%d�T����:",1-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=1){
						printf("\n*�A�q�c����������f���X�F����*\n");
						inserted-=1;
						total+=1;	
					}
				}
				break;
			}

			case 3:{
				printf("�����ľ��i�H�^�_�ͩR�C\n\n�O�_�n�H3�����������ʶR�����ľ�?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�����ľ�?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F�����ľ�*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 2:{
				printf("�~���ĻI�i�H�^�_�ͩR�C\n\n�O�_�n�H2�����������ʶR�~���ĻI?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�~���ĻI?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(����ʽжR��0)�Ч�J%d�T����:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*�A�q�c����������f���X�F�~���ĻI*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}
			
			case 1:{
				printf("�����ľ��i�H�^�_�ֶq�ͩR�C\n\n�O�_�n�H1�����������ʶR�����ľ�?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�����ľ�?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
						printf("(����ʽжR��0)�Ч�J%d�T����:",1-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=1){
						printf("\n*�A�q�c����������f���X�F�����ľ�*\n");
						inserted-=1;
						total+=1;	
					}
				}
				break;
			}
			
			default: break;
			}	
		}
	break;
	}

	case 2:{
		while(1){
		printf("\n�п�ܷQ�ʶR������:\n01.�p���(3G)   02.�K��(5G)     03.�k�v��U(3G) 04.�n�ִU�l(2G)\n05.���K��(3G)   06.�Ǯ{���T(4G) 07.���K�Z��(5G) 08.�n�֯ݥ�(4G)\n09.���K�L��(3G) 10.���̪���(3G) 11.�w�֪��u(2G) 12.�]�����c(3G)\n\n�^��������Ы�0\n");
		if(inserted>0) printf("(�z�w��J%d�T����)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 12:{
				printf("�]�����c�O�Hĭ�t�]�O�����u�s´�����c�l�A��������]�k���m�C\n\n�O�_�n�H3�����������ʶR�]�����c?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�]�����c?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F�]�����c*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}
			
			case 11:{
				printf("�w�֪��u�O�H��w���~���_�X�����u�l�A����������m�O�C\n\n�O�_�n�H2�����������ʶR�w�֪��u?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�w�֪��u?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(����ʽжR��0)�Ч�J%d�T����:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=2){
						printf("\n*�A�q�c����������f���X�F�w�֪��u*\n");
						inserted-=2;
						total+=2;	
					}
				}
			break;
			}

			case 10:{
				printf("���̪��ȬO�]�k�v���зǰt�ơA��������]�k���m�O�C\n\n�O�_�n�H3�����������ʶR���̪���?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�Ť�Y��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F���̪���*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 9:{
				printf("���K�L�ҬO�M�h�ηR�Ϊ��˳ơA����������m�O�C\n\n�O�_�n�H3�����������ʶR���K�L��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���K�L��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F���K�L��*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 8:{
				printf("�n�֯ݥұĥν�a�X�n���~�ֻs���A�O�Q�s�x����������C\n\n�O�_�n�H4�����������ʶR�n�֯ݥ�?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�n�֯ݥ�?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(����ʽжR��0)�Ч�J%d�T����:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=4){
						printf("\n*�A�q�c����������f���X�F�n�֯ݥ�*\n");
						inserted-=4;
						total+=4;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("���K�Z�Ҵ��ѤF�O�H�w�ߪ����@�A�Q�M�h�Τj�q�ϥΡC\n\n�O�_�n�H5�����������ʶR���K�Z��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���K�Z��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F���K�Z��*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}

			case 6:{
				printf("�Ǯ{���T�O�]�k�v�̨������i�{�A�q�`�]�O�J���Ǯ{������C\n\n�O�_�n�H4�����������ʶR�Ǯ{���T?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�Ǯ{���T?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(����ʽжR��0)�Ч�J%d�T����:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*�A�q�c����������f���X�F�Ǯ{���T*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("���K���ĥθ��ֶq�����ݥH��ֹ���u����ê�A�P�ɤ]�୫�I�����O�@�Y���C\n\n�O�_�n�H3�����������ʶR���K��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���K��(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F���K��*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 4:{
				printf("�n�ִU�l�O�����W�̱`�����@�شU�l�A�H�X�n���~�ֻs���C\n\n�O�_�n�H2�����������ʶR�n�ִU�l?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���b���b?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
					printf("(����ʽжR��0)�Ч�J%d�T����:",2-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*�A�q�c����������f���X�F�n�ִU�l*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}

			case 3:{
				printf("�k�v��U�Hĭ�t�]�O�����u�s´�Ӧ��A����ϰt���̶����믫�C\n\n�O�_�n�H3�����������ʶR�k�v��U?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�k�v��U?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F�k�v��U*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 2:{
				printf("�K�޴��ѤF�j�q���O�@��O�A���]�����q�|�����������H�ʧ@�ܱo�y�L��w�C\n\n�O�_�n�H5�����������ʶR�K��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�K��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F�K��*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}
			
			case 1:{
				printf("�p��޴��ѤF²�檺���m��O�C\n\n�O�_�n3�����������ʶR�p���?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�p���?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F�p���*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}
			
			default: break;
			}	
		}
	break;
	}
	
	default:{
		while(1){
		printf("\n�п�ܷQ�ʶR���Z��:\n01.���C(3G)   02.�u�C(2G)   03.�j�C(5G)   04.�ԩ�(6G)\n05.���j(5G)   06.���M(4G)   07.�Q�r�}(3G) 08.���}(5G)\n09.�u��(2G)   10.�]��(6G)   11.���ؼC(1G) 12.�|�S�^(5G)\n\n�^��������Ы�0\n");
		if(inserted>0) printf("(�z�w��J%d�T����)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 12:{
				printf("�|�S�^�O�C�@��֤H���ܾժ����־��C\n\n�O�_�n�H5�����������ʶR�|�S�^?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�|�S�^?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F�|�S�^*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}
			
			case 11:{
				printf("���ؼC��ˤH��L�ΡA�A�X�X�_���N�������ĤH�ˮ`�C\n\n�O�_�n�H1�����������ʶR���ؼC?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���ؼC?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
						printf("(����ʽжR��0)�Ч�J%d�T����:",1-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=1){
						printf("\n*�A�q�c����������f���X�F���ؼC*\n");
						inserted-=1;
						total+=1;	
					}
				}
			break;
			}

			case 10:{
				printf("�]������P�ϥΪ̪��]�O�@��A�����k�N���¤O�C\n\n�O�_�n�H6�����������ʶR�]��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�]��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�]��*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}

			case 9:{
				printf("�u�������i�H�����ĤH���Y�h���A�]��y�L�����k�N���¤O�C\n\n�O�_�n�H2�����������ʶR�u��?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�u��?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(����ʽжR��0)�Ч�J%d�T����:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*�A�q�c����������f���X�F�u��*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}

			case 8:{
				printf("���}����q������o�_�����A�A�X�O���@�w���Z���@�ԡC\n\n�O�_�n�H5�����������ʶR���}?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���}?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F���}*\n");
						inserted-=5;
						total+=5;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("�Q�r�}���M�g�{���ɤH�N�A������ֳt���s��g���C\n\n�O�_�n�H3�����������ʶR�Q�r�}?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�Q�r�}?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F�Q�r�}*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 6:{
				printf("���M�A�X�K�����׷i�ԡA�]�����ҥH�����֪��X��C\n\n�O�_�n�H4�����������ʶR���M?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���M?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(����ʽжR��0)�Ч�J%d�T����:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*�A�q�c����������f���X�F���M*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("���j�]����`�����׸����A������Ī��������M�C���ĤH�Ӥ��Q��ҶˡC\n\n�O�_�n�H5�����������ʶR���j?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���j(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F���j*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}

			case 4:{
				printf("�ԩ����������A�}���e����ê�A���]�����������|�Q���}�C\n\n�O�_�n�H6�����������ʶR�ԩ�?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�ԩ�?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
					printf("(����ʽжR��0)�Ч�J%d�T����:",6-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*�A�q�c����������f���X�F�ԩ�*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 3:{
				printf("�j�C�i�H���O�Ԥh�������A�b�u�L�۱��ɦ��Q���X�⪺��{�C\n\n�O�_�n�H5�����������ʶR�j�C?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�j�C?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(����ʽжR��0)�Ч�J%d�T����:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=5){
						printf("\n*�A�q�c����������f���X�F�j�C*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}

			case 2:{
				printf("�u�C���M�b�¤O�W�񤣤W��L�L���A���]������������X��������������q�C\n\n�O�_�n�H2�����������ʶR�u�C?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR�u�C?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(����ʽжR��0)�Ч�J%d�T����:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*�A�q�c����������f���X�F�u�C*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}
			
			case 1:{
				printf("���C�O�Ҧ��h�L���|�t�ƪ��зǸ˳ơA�U�譱�������Ū���{�C\n\n�O�_�n�H3�����������ʶR���C?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n�ާ@���~�A�Э��s�ާ@�@��:\n");
					printf("�O�_�n�ʶR���C?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(����ʽжR��0)�Ч�J%d�T����:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*�A�q�c����������f���X�F���C*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}
			
			default: break;
			}	
		}
	break;
	}
	}
	}
}
