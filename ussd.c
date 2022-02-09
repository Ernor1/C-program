#include<stdio.h>
#include<stdlib.h>
void main(){
	
	int option ,airtime=0,dep_money=0,balance=0;
	
LOOP:	printf("=============Welcome to Mobilephone USSD=============");
	printf("\n\n");
	printf("Choose option \n\n");
	printf("1. Buy airtime\n");
	printf("2. DataBundle\n");
	printf("3. Deposit\n");
	printf("4. BALANCE\n");
	printf("5. Exit\n");
	printf("option\t");
	scanf("  %d",&option);
	switch(option){
		case 1:
			printf("===welcome to but airtime===\n\n");
				printf("1.day airtime\n");
			printf("2.week airtime\n");
			printf("3.month airtime\n");
			printf("option\t");
			scanf("  %d",&option);
			switch(option){
				case 1:
					printf("1.100\n");
					printf("2.250\n");
					printf("3.500\n");
					printf("option\t");
					scanf("  %d",&option);	
					switch(option){
						case 1:
							if(dep_money<100){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-100;
								printf("you have successfully bought airtime for 100\t");
								printf("balance: %d",balance);
								
							}
							break;
						case 2:
							if(dep_money<250){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-250;
								printf("you have successfully bought airtime for 250\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 3:
							if(dep_money<500){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-500;
								printf("you have successfully bought airtime for 500\t");
								printf("balance\n\n: %d",balance);
							}
							break;
						}
						
			break;
			case 2:
					printf("1.1000\n");
					printf("2.1500\n");
					printf("3.2000\n");
					printf("option\t");
					scanf("  %d",&option);	
					switch(option){
						case 1:
							if(dep_money<1000){
								printf("you don't have enough money\n\n");
								
							} 
							else{
								balance=dep_money-1000;
								printf("you have successfully bought airtime for 1000\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 2:
							if(dep_money<1500){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-1500;
								printf("you have successfully bought airtime for 1500\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 3:
							if(dep_money<2000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-2000;
								printf("you have successfully bought airtime for 2000 \t");
								printf("balance: %d\n\n",balance);
							}
							break;
				}
						
			break;		
			
		case 3:
					printf("1.3000\n");
					printf("2.5000\n");
					printf("3.15000\n");
					printf("option\t");
					scanf("  %d",&option);	
					switch(option){
						case 1:
							if(dep_money<3000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-3000;
								printf("you have successfully bought airtime for 3000\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 2:
							if(dep_money<5000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-5000;
								printf("you have successfully bought airtime for 5000\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 3:
							if(dep_money<15000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-15000;
								printf("you have successfully bought airtime for 100\t");
								printf("balance: %d\\n",balance);
							}
							break;
				}
			break;			
			}
			
			
	break;
			case 2:
			printf("===welcome to buy DataBundle===\n\n");
				printf("1.day DataBundle\n");
			printf("2.week DataBundle\n");
			printf("3.month DataBundle\n");
			printf("option\t");
			scanf("  %d",&option);
			switch(option){
				case 1:
					printf("1.100 for 50Mb\n");
					printf("2.250 for 120Mb\n");
					printf("3.500 for 500Mb\n");
					printf("option\t");
					scanf("  %d",&option);	
					switch(option){
						case 1:
							if(dep_money<100){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-100;
								printf("you have successfully bought DataBundle for 100\t");
								printf("balance: %d\n\n",balance);
								
							}
							break;
						case 2:
							if(dep_money<250){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-250;
								printf("you have successfully bought Databundle for 250\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 3:
							if(dep_money<500){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-500;
								printf("you have successfully bought Databundle for 500\t");
								printf("balance\n\n: %d",balance);
							}
							break;
						}
						
			break;
			case 2:
					printf("1.1000 for 1GB\n");
					printf("2.1500 for 1.5GB\n");
					printf("3.2000 for 3GB\n");
					printf("option\t");
					scanf("  %d",&option);	
					switch(option){
						case 1:
							if(dep_money<1000){
								printf("you don't have enough money\n\n");
								
							} 
							else{
								balance=dep_money-1000;
								printf("you have successfully bought Databundle for 1000\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 2:
							if(dep_money<1500){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-1500;
								printf("you have successfully bought Databundle for 1500\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 3:
							if(dep_money<2000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-2000;
								printf("you have successfully bought Databundle for 2000 \t");
								printf("balance: %d\n\n",balance);
							}
							break;
				}
						
			break;		
			
		case 3:
					printf("1.3000 for 5GB\n");
					printf("2.5000 for 10GB\n");
					printf("3.15000 for 30GB\n");
					printf("option\t");
					scanf("  %d",&option);	
					switch(option){
						case 1:
							if(dep_money<3000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-3000;
								printf("you have successfully bought Databundle for 3000\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 2:
							if(dep_money<5000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-5000;
								printf("you have successfully bought Databundle for 5000\t");
								printf("balance: %d\n\n",balance);
							}
							break;
						case 3:
							if(dep_money<15000){
								printf("you don't have enough money\n\n");
							} 
							else{
								balance=dep_money-15000;
								printf("you have successfully bought Databundle for 100\t");
								printf("balance: %d\\n",balance);
							}
							break;
				}
			break;			
			}
			
			
	break;
		case 3:
			printf("===Deposit Money===\n\n");
			printf("Enter Amount of Money:\t");
			scanf("%d",&dep_money);
			
			break;
		case 4:
		printf("BALANCE: %d\n\n",dep_money);
		break;
		case 5:
		exit(0);	
			default:
				printf("INVALID OPTION\n\n");
			}
			
		goto LOOP;
	}

		
