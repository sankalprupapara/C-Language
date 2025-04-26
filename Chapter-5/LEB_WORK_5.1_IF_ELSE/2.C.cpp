#include<stdio.h>
main(){
	int a;
	printf("enter a = ");
	scanf("%d",&a);
	if(a>=1){
		printf("A IS POSITIVE");
	}else{
		if(a<0){
			printf("A IS NEGATIVE");
		}else{
			printf("A IS ZERO");
		}
	}
}
