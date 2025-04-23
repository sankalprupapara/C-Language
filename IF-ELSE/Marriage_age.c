#include<stdio.h>
main (){
	printf("***AS PER MARRIAGE RULE***\n");
	int b,g;
	printf("ENTER BOY'S AGE :-");
	scanf("%d",&b);
	printf("ENTER GIRL'S AGE :-");
	scanf("%d",&g);
	if(b>=21 && g>=19){
		printf("AS PER GOVERMENT RULE BOTH ABLE TO DO MARRIAGE");
	}else{
		printf("AS PER GOVERMENT RULE NOT ABLE TO DO MARRIAGE");
		
	}
}
