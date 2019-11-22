/*
Student numder: B10802081
Name: huang Tengqing
File name: b10802081-hwk1-1
Compiler: Dev C++
Date: 2019/10/24
*/

#include <stdio.h>
#include <stdlib.h>

char lr(void);
char lmr(void); 

int main(void)
{
	printf("Legend tells, great treasure is sleeping in cave of greed.\nYou are one of the treasure hunters who came here to find the legendary treasure.\n");
	
	while(1){
		
		printf("You entered the cave and soon arrived the first forked road.\n");
		switch(lr()){
			
			case 'l':
			case 'L':{
				printf("\nYou find a skeleton leaning agianst the wall.\nAfter taking his sword and shield, you went foward.\n");
				printf("After a while of walking, you arrived the second forked road.\n");
				
				switch(lmr()){
					
					case 'l':
					case 'L':{
						printf("\nYou entered a little room, and one of a sudden the ceiling falls down.\nYou were crashed.\n\nGAME OVER\n\n");
					break;
					}
					
					case 'r':
					case 'R':{
						printf("\nWhen you're walking through a narrow alley, a poison arrow flied out of the wall.\nYou died after a few minutes.\n\nGAME OVER\n\n");
					break;
					}
					
					default: {
						printf("\nYou walked straight foward and heared someone singing from the left.\n");
						
						switch(lr()){
							
							case 'l':
							case 'L':{
								printf("\nYou were atracted by the song and turned left.\nThen you saw a succubus.\nBefore you can even react, you lost control of your body and finally lost you mind.\n\nGAME OVER\n\n");
							break;
							}
							
							default:{
								printf("\nYou encountered a green slime.\nUsing the shield you found, you smashed it into pieces.\n");
								printf("After the fight, you see another forked road in front of you.\n");
							
								switch(lr()){
									
									case 'l':
									case 'L':{
										printf("\nYou saw a burning demon at the end of the road.\nIt noticed you and you start burning.\nAfter several seconds, you burnt into ashes.\n\nGAME OVER\n\n");
									break;
									}
									
									default:{
										printf("\nYou bumped into an imp, slashed it in half with the sword you picked up.\n");
										printf("\nYour instinct tells you that you're very close.\n");
										
										switch(lr()){
											
											case 'l':
											case 'L':{
												printf("\nYou entered a room full of mirrors.\nSlowly, the reflection of yourself started to talk.\nYou went mad and the reflections took control of you.\n\nGAME OVER\n\n");
											break;
											}
											
											default:{
												printf("\nAt the end of the cave, you found a mountain of gold and accesories.\nSeems you've found the legendary treasure!\n\nCONGRATULATIONS!!\n\n");
											break;
											}
										}
									break;
									}
								}
							break;
							}
					}		
					break;
					}
				}
				
			break;
			}
			
			default:{
				printf("\nYou found a coin on the floor.\nYou picked it up and continued exploring.\n");
				printf("Then you arrived at the second forked road\n");
				
				switch(lr()){
					
					case 'l':
					case 'L':{
						printf("\nYou found an enpty chest in a dead end.\nSomeone must have came here before you.\nWith disappointment, you went back to the town\n\nGAME OVER\n\n");
					break;
					}
					
					default:{
						printf("\nThe light of you your torch extinguished.\nYou can see nothing and fell down into an abyss.\n\nGAME OVER\n\n");
					break;
					}
				}
			break;
			}
		}
		
	char yn;
	printf("Play again?(Y/N):");
	scanf(" %c",&yn);
	
	for(yn;yn!='Y' && yn!='y' && yn!='N' && yn!='n';scanf(" %c",&yn))
		printf("Error, please try again(Y/N):");
	
	if(yn=='n'||yn=='N') break;
	
	
	}
	return 0;
}

char lr(void)
{
	char lr;
	printf("Your choice(L/R):");
	scanf(" %c",&lr);
	
	while(lr!='l' && lr!='L' && lr!='r' && lr!='R'){
		printf("Error, please try again(L/R):");
		scanf(" %c",&lr);
	}
	
	return lr;
}

char lmr(void)
{
	char lmr;
	printf("Your choice(L/M/R):");
	scanf(" %c",&lmr);
	
	while(lmr!='l' && lmr!='L' && lmr!='m' && lmr!='M' && lmr!='r' && lmr!='R'){
		printf("Error, please try again(L/M/R):");
		scanf(" %c",&lmr);
	}
	
	return lmr;
}
