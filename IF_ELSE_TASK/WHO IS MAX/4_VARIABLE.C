#include<stdio.h>
main(){
	int a,b,c,d;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	printf("Enter value of D = ");
	scanf("%d",&d);
	if(a>b){
		if(a>c){
			if(a>d){
			printf("A IS BIG");
			}else{
				printf("D IS BIG");
			}
		}else{
			if(c>d){
				printf("C IS BIG");
			}else{
				printf("D IS BIG");
			}
		}
	}else{
		if(b>c){
			if (b>d){
	          printf("B IS BIG");
			}else{
				printf("D IS BIG");
			}
		}else{
			if(c>d){
				printf("C IS BIG");
			}else{
				printf("D IS BIG");
			}
		}
		}
		
	}
