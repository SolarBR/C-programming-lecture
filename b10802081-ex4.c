/*
Student Number: B10802081
Name: Huang Tengqing
File Name: b10802081-ex4
Compiler: Dev C++
Date: 2019/10/15
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int option = 1;
	
	while(option>0 && option<6){
		printf("========= Shape Menu ==========\n");
		printf("1.Box\n");
		printf("2.Oval\n");
		printf("3.Arrow\n");
		printf("4.Diamond\n");
		printf("5.Heart\n");
		printf("Enter other numbers to exit.\n");
		printf("===============================\n");
		printf("=>");
	
		scanf("%u",&option);
		switch(option){
			
			case 1:{
				printf("*********\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*********\n");
			break;
			}
			
			case 2:{
				printf("   ***   \n *     * \n*       *\n*       *\n*       *\n*       *\n*       *\n *     * \n   ***\n");
			break;
			}
			
			case 3:{	
				printf("  *  \n *** \n*****\n  *  \n  *  \n  *  \n  *  \n  *  \n  *\n");
			break;
			}
			
			case 4:{
				printf("    *    \n   * *   \n  *   *  \n *     * \n*       *\n *     * \n  *   *  \n   * *   \n    *\n");
			break;
			}
			
			case 5:{
				printf("  ****   ****  \n *    * *    * \n*      *      *\n*             *\n *           * \n  *         *  \n   *       *   \n     *   *     \n       *\n");
			break;
			}
			
		default: break;
		}
	}
	
	system("pause");
}
