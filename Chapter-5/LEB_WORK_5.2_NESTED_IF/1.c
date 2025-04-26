#include<stdio.h>
main(){
	int a,b,c;
	printf("ENTER VALUE OF A = ");
	scanf("%d",&a);
	printf("ENTER VALUE OF B = ");
	scanf("%d",&b);
	printf("ENTER VALUE OF C = ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("Maximum value is :%d",a);
		}else{
			printf("Maximum value is :%d",b);
			}
	}else{
		if(b>c){
			printf("Maximum value is :%d",b);
		}else{
			printf("Maximum value is :%d",c);
		}
	}
	
}
