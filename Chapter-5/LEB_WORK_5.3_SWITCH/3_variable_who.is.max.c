#include<stdio.h>
main(){
	int a,b,c;
	printf("ENTER VALUE OF A = ");
	scanf("%d",&a);
	printf("ENTER VALUE OF B = ");
	scanf("%d",&b);
	printf("ENTER VALUE OF C = ");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("MAXIMUM VALUE IS = %d",a);
	}else if (b>c && b>a){
		printf("MAXIMUM VALUE IS = %d",b);
	}else{
		printf("MAXIMUM VALUE IS = %d",c);
	}
}
