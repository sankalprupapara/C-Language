#include<stdio.h>
main(){
	int n500,n200,n100,n50,n20,n10,n5,n2,n1,amount;
	int a500,a200,a100,a50,a20,a10,a5,a2,a1;
	printf("Enter number of 500 notes = ");
	scanf("%d",&n500),
	printf("Enter number of 200 notes = ");
	scanf("%d",&n200),
	printf("Enter number of 100 notes = ");
	scanf("%d",&n100),
	printf("Enter number of 50 notes = ");
	scanf("%d",&n50),
	printf("Enter number of 20 notes = ");
	scanf("%d",&n20),
	printf("Enter number of 10 notes = ");
	scanf("%d",&n10),
	printf("Enter number of 5 coins = ");
	scanf("%d",&n5),
	printf("Enter number of 2 coins = ");
	scanf("%d",&n2),
	printf("Enter number of 1 coins = ");
	scanf("%d",&n1),
	
	a500=n500*500;
	a200=n200*200;
	a100=n100*100;
	a50=n50*50;
	a20=n20*20;
	a10=n10*10;
	a5=n5*5;
	a2=n2*2;
	a1=n1*1;
	
	amount=a500+a200+a100+a50+a20+a10+a5+a2+a1;
	printf("TOTAL AOMUNT = %d",amount);
}
