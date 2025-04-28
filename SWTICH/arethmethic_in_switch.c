#include<stdio.h>
main(){
	int ch,a,b;
	printf("ENTER NUMBER 1 TO DO SUM\n");
	printf("ENTER NUMBER 2 TO DO MIN\n");
	printf("ENTER NUMBER 3 TO DO MUL\n");
	printf("ENTER NUMBER 4 TO DO DIVI\n");
	printf("ENETR NUMBER WOULD YOU LIKE ......");
	scanf("%d",&ch);
	printf("ENTER NUMBER ONE = ");
	scanf("%d",&a);
	printf("ENTER NUMBER TWO  = ");
	scanf("%d",&b);
	
	switch(ch){
		case 1:
		 printf("YOU SELECT TO DO SUM\n");
		 printf("YOUR ANSWER = %d", a+b);
		break;
		case 2:
		 printf("YOU SELECT TO DO MIN\n");
		 printf("YOUR ANSWER = %d", a-b);
		break;
		case 3:
		 printf("YOU SELECT TO DO MUL\n");
		 printf("YOUR ANSWER = %d", a*b);
		break;
		case 4:
		 printf("YOU SELECT TO DO DIVI\n");
		 printf("YOUR ANSWER = %d", a/b);
		break;
		
	}
	
}
