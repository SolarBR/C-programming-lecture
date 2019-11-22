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
	printf("歡迎來到冒險者販賣機\n");
	
	int genre = 6, total = 0, selection = 13, coin = 0, inserted = 0;
	char yn = 'n';
	
	while(1){
	printf("\n請選擇想購買的物品分類:\n\n1.武器\n\n2.防具\n\n3.消耗品\n\n4.魔法道具\n\n5.傭兵契約\n\n0.結束購物\n\n");
	if(inserted>0) printf("(您已投入%d枚金幣)\n(結束購物即可取出退款)\n",inserted);
	scanf("%d",&genre);
	
	if(genre == 0){
		if(inserted>0){
			printf("*你從退幣口取出了%d枚金幣*",inserted);
			inserted = 0;
		}
		printf("\n感謝您的光臨，您本次的購物總金額為%d金幣，歡迎下次再來。",total);
		break;
	}

	while(genre<1 || genre>=6){
	printf("\n操作有誤，請重新操作一次:\n\n");
	scanf("%d",&genre);
	}
	
	switch(genre){
	case 5:{
		while(1){
		printf("\n請選擇想僱用的傭兵職業:\n01.戰士(5G) 　　02.守護者(4G) 　03.武僧(6G) 　　\n04.暗殺者(5G) 　05.射手(4G)　　 06.鬥士(6G) 　　\n07.魔法師(6G) 　08.召喚師(6G)　 09.奇術師(6G)　 \n10.神官(5G)　 　11.吟遊詩人(6G) 12.煉金術士(6G)\n\n回到分類選單請按0\n");
		if(inserted>0) printf("(您已投入%d枚金幣)",inserted);
		printf("\n\n");
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n操作有誤，請重新操作一次:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){
			
			case 12:{
				printf("煉金術士是博學多聞的學者，\n以強大的知識背景為後盾製作各種道具，\n其中以改變武器的屬性最具代表性，\n配合他們看穿弱點的知識，\n能夠輕易地攻其不備，\n是特殊型的輔助職業。\n\n是否要以6金幣的價格雇用煉金術士?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用煉金術士?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了煉金術士的雇傭契約*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}
			
			case 11:{
				printf("吟遊詩人的歌為勇士而唱，\n有的提振士氣有的治癒人心，\n在戰場上他們透過音樂帶來各式各樣不同的效果，\n藉以引發隊友的潛能使戰鬥變的更容易，\n是增益型的輔助職業。\n\n是否要以6金幣的價格雇用吟遊詩人?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用吟遊詩人?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了吟遊詩人的雇傭契約*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}

			case 10:{
				printf("神官作為與神溝通的中間人，\n能夠引發神蹟治癒隊友或是予以保護，\n也擅長創造不同的領域帶來場地優勢，\n此外超渡亡者讓它們安息也是神官工作的一環，\n是以回復能力見長的輔助職業。\n\n是否要以5金幣的價格雇用神官?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用神官?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了神官的雇傭契約*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}

			case 9:{
				printf("奇術師精通各式幻術，\n賦予各式減益效果，\n也能夠操控目標讓敵人自亂陣腳，\n除此之外也擅長使用黑暗魔法，\n或是以魔力設置地雷，\n也能將深不見底的魔力分給他人，\n是輔助型魔法輸出職業。\n\n是否要以6金幣的價格雇用奇術師?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用奇術師?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了奇術師的雇傭契約*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 8:{
				printf("召喚師可以與他人簽訂契約，\n在戰鬥中召喚不同的生物與物品協助作戰，\n依據召喚的不同可以是橫掃千軍的戰士，\n或是操縱魔法的魔法師，\n也可以是保護友軍的輔助角色，\n是全能型的職業。\n\n是否要以6金幣的價格雇用召喚師?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用召喚師?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了召喚師的雇傭契約*\n");
						inserted-=6;
						total+=6;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("魔法師的元素魔法能夠輕易的使敵人灰飛煙滅，\n他們可以自由操縱火焰、寒冰以及閃電三種元素，\n也知道如何延伸元素的力量使敵人陷入異常狀態，\n是全面型魔法輸出職業。\n\n是否要以6金幣的價格雇用魔法師?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用魔法師?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了魔法師的雇傭契約*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 6:{
				printf("鬥士以第二把武器代替盾牌，\n磨練出了怒滔般的進攻技巧，\n長年的戰鬥經驗能夠快速看穿敵人的弱點，\n進而攻其不備。\n他們的戰鬥就像一支華麗的舞，\n屬於高火力近戰輸出職業。\n\n是否要以6金幣的價格雇用鬥士?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用鬥士?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了鬥士的雇傭契約*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}
			
			case 5:{
				printf("射手精通各式遠程武器，\n專精於從遠處發起攻擊，\n根據手中兵器的不同，\n能夠成為致命的狙擊手，\n也能成為玩弄敵人於股掌間的游擊兵，\n是高火力的遠程輸出職業。\n\n是否要以4金幣的價格雇用射手?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用射手?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(放棄購請買按0)請投入%d枚金幣:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=4){
						printf("\n*你從販賣機的取物口取出了射手的雇傭契約*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}

			case 4:{
				printf("暗殺者擅長從暗處發起奇襲，\n用致命的暗器、短刀和毒藥奪走目標的生命，\n遇到危險時也可以潛入影中來躲避攻擊，\n如死神一般神出鬼沒，\n是游擊型的輸出職業。\n\n是否要以5金幣的價格雇用暗殺者?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用暗殺者?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
					printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了暗殺者的雇傭契約*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}

			case 3:{
				printf("武僧有著堅定的意志，\n修習變化莫測的拳法，\n一旦出手鮮少有人能敵，\n平日的鍛鍊造就了驚人的回復能力，\n矯健的身手也能自由穿梭敵陣，\n是攻守一體的平衡型職業。\n\n是否要以6金幣的價格雇用武僧?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用武僧?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了武僧的雇傭契約*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 2:{
				printf("守護者的大盾可以隔絕大量的傷害，\n保護身後的夥伴，\n也能夠將隊友承受的傷害轉移給自己，\n必要時更能舉起盾牌擊暈敵人。\n透過訓練能獲得異常狀態的抗性，\n是銅牆鐵壁般的坦克職業。\n\n是否要以4金幣的價格雇用守護者?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用守護者?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(放棄購請買按0)請投入%d枚金幣:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=4){
						printf("\n*你從販賣機的取物口取出了武僧的雇傭契約*\n");
						inserted-=4;
						total+=4;	
					}
				}
				break;
			}
			
			case 1:{
				printf("戰士能夠自由使用各種近戰武器做出高額傷害，\n擅長以攻擊作為防守，\n給予來犯的敵人迎頭痛擊，\n經過訓練也能夠運用劍氣做出遠程魔法傷害，\n是相當全面的輸出職業。\n\n是否要以5金幣的價格雇用戰士?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要雇用戰士?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了戰士的雇傭契約*\n");
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
		printf("\n請選擇想購買的魔法道具:\n01.火球卷軸(3G)　　 02.雷擊卷軸(3G)　　 03.暴風雪卷軸(5G)　 04.風刃卷軸(3G)\n05.治癒之光卷軸(6G) 06.淨化卷軸(4G)　　 07.回家卷軸(3G) 　　08.再生項鍊(8G)\n09.魔術徽章(8G)　 　10.符文墜鍊(10G)　  11.元素護符(9G)　 　12.奇蹟護符(8G)\n\n回到分類選單請按0\n");
		if(inserted>0) printf("(您已投入%d枚金幣)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n操作有誤，請重新操作一次:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 12:{
				printf("奇蹟護符能給予配戴者神的加護，使其免疫石化及詛咒。\n\n是否要以8金幣的價格購買奇蹟護符?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買奇蹟護符?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<8){
						printf("(放棄購請買按0)請投入%d枚金幣:",8-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=8){
						printf("\n*你從販賣機的取物口取出了奇蹟護符*\n");
						inserted-=8;
						total+=8;	
					}
				}
			break;
			}
			
			case 11:{
				printf("元素護符給予配戴者三大元素的親和力，使其免疫燃燒、凍結及麻痺。\n\n是否要以9金幣的價格購買元素護符?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買元素護符?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<9){
						printf("(放棄購請買按0)請投入%d枚金幣:",9-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=9){
						printf("\n*你從販賣機的取物口取出了元素護符*\n");
						inserted-=9;
						total+=9;	
					}
				}
			break;
			}

			case 10:{
				printf("符文墜鍊能提高配戴者的魔法適性，消耗魔力時有一定機率返還等量魔力。\n\n是否要以10金幣的價格購買符文墜鍊?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買符文墜鍊?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<10){
						printf("(放棄購請買按0)請投入%d枚金幣:",10-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=10){
						printf("\n*你從販賣機的取物口取出了符文墜鍊*\n");
						inserted-=10;
						total+=10;	
					}
				}
			break;
			}

			case 9:{
				printf("魔術徽章能提高配戴者的魔力強度，增強施展的法術傷害。\n\n是否要以8金幣的價格購買魔術徽章?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買魔術徽章?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<8){
						printf("(放棄購請買按0)請投入%d枚金幣:",8-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=8){
						printf("\n*你從販賣機的取物口取出了魔術徽章*\n");
						inserted-=8;
						total+=8;	
					}
				}
			break;
			}

			case 8:{
				printf("再生項鍊能夠提高配戴者的生命力，使其每隔一段時間就能回復生命值。\n\n是否要以8金幣的價格購買再生項鍊?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買再生項鍊?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<8){
						printf("(放棄購請買按0)請投入%d枚金幣:",8-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=8){
						printf("\n*你從販賣機的取物口取出了再生項鍊*\n");
						inserted-=8;
						total+=8;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("回家卷軸上儲存的魔法能夠讓使用者回到指定的安全區域。\n\n是否要以3金幣的價格購買回家卷軸?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買回家卷軸?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了回家卷軸*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 6:{
				printf("淨化卷軸上儲存了神官的祝福，讓使用者可以施展一次「淨化」來消除異常狀態。\n\n是否要以4金幣的價格購買淨化卷軸?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買淨化卷軸?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(放棄購請買按0)請投入%d枚金幣:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*你從販賣機的取物口取出了淨化卷軸*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("治癒之光卷軸上儲存了神官的神聖法術，讓使用者可以施展一次「治癒之光」來治癒周圍的夥伴。\n\n是否要以6金幣的價格購買治癒之光卷軸?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買治癒之光卷軸(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了治癒之光卷軸*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}

			case 4:{
				printf("風刃卷軸上儲存了風的魔力，讓使用者可以施展一次「風刃」攻擊敵人。\n\n是否要以3金幣的價格購買風刃卷軸?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買風刃卷軸?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
					printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了風刃卷軸*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 3:{
				printf("暴風雪卷軸上儲存了冰的魔力，讓使用者可以施展一次「暴風雪」攻擊敵人。\n\n是否要以5金幣的價格購買暴風雪卷軸?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買暴風雪卷軸?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了暴風雪卷軸*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}

			case 2:{
				printf("雷擊卷軸上儲存了雷的魔力，讓使用者可以施展一次「雷擊」攻擊敵人。\n\n是否要以3金幣的價格購買雷擊卷軸?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買雷擊卷軸?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了雷擊卷軸*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}
			
			case 1:{
				printf("火球卷軸上儲存了火的魔力，讓使用者可以施展一次「火球」攻擊敵人。\n\n是否要以3金幣的價格購買火球卷軸?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買火球卷軸?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了火球卷軸*\n");
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
		printf("\n請選擇想購買的消耗品:\n1.紅色藥劑(1G)  2.外傷藥膏(2G)  3.黃色藥劑(3G)　 4.止血草(1G)\n5.藍色藥劑(2G)  6.水色藥劑(4G)  7.天藍藥劑(6G) 　8.解毒劑(1G)\n\n回到分類選單請按0\n");
		if(inserted>0) printf("(您已投入%d枚金幣)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=9){
				printf("\n操作有誤，請重新操作一次:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 8:{
				printf("解毒劑可以解除中毒狀態。\n\n是否要以1金幣的價格購解毒劑?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買解毒劑?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
						printf("(放棄購請買按0)請投入%d枚金幣:",1-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=1){
						printf("\n*你從販賣機的取物口取出了解毒劑*\n");
						inserted-=1;
						total+=1;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("天藍藥劑可以回復大量的魔力。\n\n是否要以6金幣的價格購買天藍藥劑?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買天藍藥劑?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了天藍藥劑*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 6:{
				printf("水色藥劑可以回復魔力。\n\n是否要以4金幣的價格購買水色藥劑?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買水色藥劑?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(放棄購請買按0)請投入%d枚金幣:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*你從販賣機的取物口取出了水色藥劑*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("藍色藥劑可以回復少量的魔力。\n\n是否要以2金幣的價格購買藍色藥劑?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買藍色藥劑(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(放棄購請買按0)請投入%d枚金幣:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=2){
						printf("\n*你從販賣機的取物口取出了藍色藥劑*\n");
						inserted-=2;
						total+=2;	
					}
				}
			break;
			}

			case 4:{
				printf("止血草可以解除出血狀態並回復微量生命。\n\n是否要以1金幣的價格購止血草?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買止血草?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
					printf("(放棄購請買按0)請投入%d枚金幣:",1-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=1){
						printf("\n*你從販賣機的取物口取出了止血草*\n");
						inserted-=1;
						total+=1;	
					}
				}
				break;
			}

			case 3:{
				printf("黃色藥劑可以回復生命。\n\n是否要以3金幣的價格購買黃色藥劑?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買黃色藥劑?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了黃色藥劑*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 2:{
				printf("外傷藥膏可以回復生命。\n\n是否要以2金幣的價格購買外傷藥膏?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買外傷藥膏?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(放棄購請買按0)請投入%d枚金幣:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*你從販賣機的取物口取出了外傷藥膏*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}
			
			case 1:{
				printf("紅色藥劑可以回復少量生命。\n\n是否要以1金幣的價格購買紅色藥劑?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買紅色藥劑?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
						printf("(放棄購請買按0)請投入%d枚金幣:",1-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=1){
						printf("\n*你從販賣機的取物口取出了紅色藥劑*\n");
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
		printf("\n請選擇想購買的防具:\n01.小圓盾(3G)   02.鐵盾(5G)     03.法師圓帽(3G) 04.軟皮帽子(2G)\n05.輕鐵盔(3G)   06.學徒長袍(4G) 07.輕鐵鎧甲(5G) 08.軟皮胸甲(4G)\n09.輕鐵腿甲(3G) 10.智者長裙(3G) 11.硬皮長靴(2G) 12.魔絲布鞋(3G)\n\n回到分類選單請按0\n");
		if(inserted>0) printf("(您已投入%d枚金幣)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n操作有誤，請重新操作一次:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 12:{
				printf("魔絲布鞋是以蘊含魔力的絲線編織成的鞋子，能夠提高魔法防禦。\n\n是否要以3金幣的價格購買魔絲布鞋?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買魔絲布鞋?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了魔絲布鞋*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}
			
			case 11:{
				printf("硬皮長靴是以堅硬的獸皮縫合成的靴子，能夠提高防禦力。\n\n是否要以2金幣的價格購買硬皮長靴?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買硬皮長靴?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(放棄購請買按0)請投入%d枚金幣:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=2){
						printf("\n*你從販賣機的取物口取出了硬皮長靴*\n");
						inserted-=2;
						total+=2;	
					}
				}
			break;
			}

			case 10:{
				printf("智者長裙是魔法師的標準配備，能夠提高魔法防禦力。\n\n是否要以3金幣的價格購買智者長裙?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買符文墜鍊?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了智者長裙*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 9:{
				printf("輕鐵腿甲是騎士團愛用的裝備，能夠提高防禦力。\n\n是否要以3金幣的價格購買輕鐵腿甲?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買輕鐵腿甲?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了輕鐵腿甲*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 8:{
				printf("軟皮胸甲採用質地柔軟的獸皮製成，是被廣泛接受的防具。\n\n是否要以4金幣的價格購買軟皮胸甲?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買軟皮胸甲?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(放棄購請買按0)請投入%d枚金幣:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=4){
						printf("\n*你從販賣機的取物口取出了軟皮胸甲*\n");
						inserted-=4;
						total+=4;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("輕鐵鎧甲提供了令人安心的防護，被騎士團大量使用。\n\n是否要以5金幣的價格購買輕鐵鎧甲?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買輕鐵鎧甲?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了輕鐵鎧甲*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}

			case 6:{
				printf("學徒長袍是魔法師們身分的展現，通常也是入門學徒的首選。\n\n是否要以4金幣的價格購買學徒長袍?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買學徒長袍?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(放棄購請買按0)請投入%d枚金幣:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*你從販賣機的取物口取出了學徒長袍*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("輕鐵盔採用較少量的金屬以減少對視線的妨礙，同時也能重點式的保護頭部。\n\n是否要以3金幣的價格購買輕鐵盔?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買輕鐵盔(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了輕鐵盔*\n");
						inserted-=3;
						total+=3;	
					}
				}
			break;
			}

			case 4:{
				printf("軟皮帽子是市面上最常見的一種帽子，以柔軟的獸皮製成。\n\n是否要以2金幣的價格購買軟皮帽子?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買風刃卷軸?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
					printf("(放棄購請買按0)請投入%d枚金幣:",2-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*你從販賣機的取物口取出了軟皮帽子*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}

			case 3:{
				printf("法師圓帽以蘊含魔力的絲線編織而成，能夠使配戴者集中精神。\n\n是否要以3金幣的價格購買法師圓帽?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買法師圓帽?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了法師圓帽*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 2:{
				printf("鐵盾提供了大量的保護能力，但因為重量會讓持有它的人動作變得稍微遲緩。\n\n是否要以5金幣的價格購買鐵盾?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買鐵盾?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了鐵盾*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}
			
			case 1:{
				printf("小圓盾提供了簡單的防禦能力。\n\n是否要3金幣的價格購買小圓盾?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買小圓盾?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了小圓盾*\n");
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
		printf("\n請選擇想購買的武器:\n01.長劍(3G)   02.短劍(2G)   03.大劍(5G)   04.戰斧(6G)\n05.長槍(5G)   06.拳套(4G)   07.十字弓(3G) 08.長弓(5G)\n09.短杖(2G)   10.魔杖(6G)   11.手裏劍(1G) 12.魯特琴(5G)\n\n回到分類選單請按0\n");
		if(inserted>0) printf("(您已投入%d枚金幣)",inserted);
		printf("\n\n");		
		scanf("%d",&selection);
			
			if(selection == 0) break;
			while(selection<0 || selection>=13){
				printf("\n操作有誤，請重新操作一次:\n\n");
				scanf("%d",&selection);	
			}
			switch(selection){

			case 12:{
				printf("魯特琴是每一位詩人都很擅長的樂器。\n\n是否要以5金幣的價格購買魯特琴?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買魯特琴?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了魯特琴*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}
			
			case 11:{
				printf("手裏劍能傷人於無形，適合出奇不意的給予敵人傷害。\n\n是否要以1金幣的價格購買手裏劍?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買手裏劍?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<1){
						printf("(放棄購請買按0)請投入%d枚金幣:",1-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}	
					
					if(inserted>=1){
						printf("\n*你從販賣機的取物口取出了手裏劍*\n");
						inserted-=1;
						total+=1;	
					}
				}
			break;
			}

			case 10:{
				printf("魔杖能夠與使用者的魔力共鳴，提高法術的威力。\n\n是否要以6金幣的價格購買魔杖?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買魔杖?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
						printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
						
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了魔杖*\n");
						inserted-=6;
						total+=6;	
					}
				}
			break;
			}

			case 9:{
				printf("短杖不但可以給予敵人迎頭痛擊，也能稍微提高法術的威力。\n\n是否要以2金幣的價格購買短杖?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買短杖?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(放棄購請買按0)請投入%d枚金幣:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*你從販賣機的取物口取出了短杖*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}

			case 8:{
				printf("長弓能夠從隊伍的後方發起攻擊，適合保持一定的距離作戰。\n\n是否要以5金幣的價格購買長弓?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買長弓?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了長弓*\n");
						inserted-=5;
						total+=5;	
					}
				} 
			break;
			}
			
			case 7:{
				printf("十字弓雖然射程不盡人意，但能夠快速的連續射擊。\n\n是否要以3金幣的價格購買十字弓?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買十字弓?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break; 
						inserted+=coin;
					} 
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了十字弓*\n");
						inserted-=3;
						total+=3;	
					}
				}
				break;
			}

			case 6:{
				printf("拳套適合貼身的肉搏戰，因為輕所以能夠更快的出手。\n\n是否要以4金幣的價格購買拳套?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買拳套?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<4){
						printf("(放棄購請買按0)請投入%d枚金幣:",4-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
					
					if(inserted>=4){
						printf("\n*你從販賣機的取物口取出了拳套*\n");
						inserted-=4;
						total+=4;	
					}
				}
			break;
			}
			
			case 5:{
				printf("長槍因為手柄的長度較長，能夠有效的攻擊持刀劍的敵人而不被其所傷。\n\n是否要以5金幣的價格購買長槍?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買長槍(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					} 
	
					if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了長槍*\n");
						inserted-=5;
						total+=5;	
					}
				}
			break;
			}

			case 4:{
				printf("戰斧能夠輕易的劈開眼前的阻礙，但因為較重偶爾會被躲開。\n\n是否要以6金幣的價格購買戰斧?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買戰斧?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<6){
					printf("(放棄購請買按0)請投入%d枚金幣:",6-inserted);
					scanf("%d",&coin);
					if(coin == 0) break;
					inserted+=coin;
					}
					
					if(inserted>=6){
						printf("\n*你從販賣機的取物口取出了戰斧*\n");
						inserted-=6;
						total+=6;	
					}
				}
				break;
			}

			case 3:{
				printf("大劍可以說是戰士的浪漫，在短兵相接時有十分出色的表現。\n\n是否要以5金幣的價格購買大劍?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買大劍?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<5){
						printf("(放棄購請買按0)請投入%d枚金幣:",5-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
				if(inserted>=5){
						printf("\n*你從販賣機的取物口取出了大劍*\n");
						inserted-=5;
						total+=5;	
					}
				}
				break;
			}

			case 2:{
				printf("短劍雖然在威力上比不上其他兵器，但因為輕巧能夠做出較複雜的攻擊手段。\n\n是否要以2金幣的價格購買短劍?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買短劍?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<2){
						printf("(放棄購請買按0)請投入%d枚金幣:",2-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=2){
						printf("\n*你從販賣機的取物口取出了短劍*\n");
						inserted-=2;
						total+=2;	
					}
				}
				break;
			}
			
			case 1:{
				printf("長劍是所有士兵都會配備的標準裝備，各方面都有均衡的表現。\n\n是否要以3金幣的價格購買長劍?(Y/N):");
				scanf(" %c",&yn);
		
				while(yn!='y' && yn!='Y' && yn!='n' && yn!='N'){
					printf("\n操作有誤，請重新操作一次:\n");
					printf("是否要購買長劍?(Y/N):");
					scanf(" %c",&yn);
				}
				
				if(yn=='y' || yn=='Y'){
					while(inserted<3){
						printf("(放棄購請買按0)請投入%d枚金幣:",3-inserted);
						scanf("%d",&coin);
						if(coin == 0) break;
						inserted+=coin;
					}
					
					if(inserted>=3){
						printf("\n*你從販賣機的取物口取出了長劍*\n");
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
