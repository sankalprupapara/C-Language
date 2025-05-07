#include<stdio.h>
main(){
	int first_digi,last_digi,num,sum;
	printf("Enter num :-");
	scanf("%d",&num);
	
	first_digi=num%10;
	
	while(num>=10){
		num=num/10;
	}
	last_digi=num;
	
	sum=first_digi+last_digi;
	
	printf("sum :- %d",sum);
}
