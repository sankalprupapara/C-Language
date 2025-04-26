#include<stdio.h>
main(){
	int a,b,c,d;
	printf("ENTER VALUE OF A = ");
	scanf("%d",&a);
	printf("ENTER VALUE OF B = ");
	scanf("%d",&b);
	printf("ENTER VALUE OF C = ");
	scanf("%d",&c);
	printf("ENTER VALUE OF D = ");
	scanf("%d",&d);
	if (a>b){
		if(a>c){
			if(a>d){
				printf("Maximum value is :%d",a);
			}else{
				printf("Maximum value is :%d",d);
			}
		}else{
			if(c>d){
				printf("Maximum value is :%d",c);
			}else{
				printf("Maximum value is :%d",d);
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("Maximum value is :%d",b);
			}else{
				printf("Maximum value is :%d",d);
			}
		}else{
			if(c>d){
				printf("Maximum value is :%d",c);
			}else{
				printf("Maximum value is :%d",d);
			}
		}
		}
	}

