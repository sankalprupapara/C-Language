#include<stdio.h>
main(){
	int amount,n500,a200,n200,a100,n100;
	int a50,n50,a20,n20,a10,n10,a5,n5,a2,n2,a1,n1;
	printf("ENTER TOTAL AMOUNT = ");
	scanf("%d",&amount);
 	  
	  n500=amount/500;
	  a200=amount%500;
	  n200=a200/200;
	  a100=a200%200;
	  n100=a100/100;
	  a50=a100%100;
	  n50=a50/50;
	  a20=a50%50;
	  n20=a20/20;
	  a10=a20%20;
	  n10=a10/10;
	  a5=a10%10;
	  n5=a5/5;
	  a2=a5%5;
	  n2=a2/2;
	  a1=a2%2;
	  n1=a1/1;
	  
	  printf("500 = %d\n",n500);
	  printf("200 = %d\n",n200);
	  printf("100 = %d\n",n100);
	  printf("50 = %d\n",n50);
	  printf("20 = %d\n",n20);
	  printf("10 = %d\n",n10);
	  printf("5 = %d\n",n5);
	  printf("2 = %d\n",n2);
	  printf("1 = %d\n",n1);
	   
}
