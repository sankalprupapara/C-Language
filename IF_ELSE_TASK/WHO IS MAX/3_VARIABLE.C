#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	if (a>b){
		if(a>c){
			printf("A IS MAX");
		}else{
			printf("C IS MAX");
		}
	}if(b>c){
		printf("B IS MAX");
	}else{
		printf("C IS MAX");
	}
}
