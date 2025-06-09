#include<stdio.h>
void div();

main(){
	div();
	
}
void div(){
	int a;
	printf("ENTER NUMBER :- ");
	scanf("%d",&a);
	if(a % 3 == 0 && a % 5 == 0){
		printf("YOUR NUMBER DIV BY 3 & 5");
	}else {
	    printf("YOUR NUMBER NOT DIV BY 3 & 5");	
	}
}
