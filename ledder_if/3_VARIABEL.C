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
    	printf("A IS BIG");
	}
	else if(b>a && b>c){
		printf("B IS BIG");
	}
	else if(c>a && c>b){
	
	    printf("C IS BIG");
	}
	else{
		printf("ALL ARE SAME");
	}
}
