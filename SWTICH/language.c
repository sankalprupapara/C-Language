#include<stdio.h>
main(){
	int ch;
	printf("ENTER 1 TO CHOOSE ENGLISH LANGUAGE\n");
	printf("ENTER 2 TO CHOOSE GUJARATI LANGUAGE\n");
	printf("ENTER 3 TO CHOOSE MARATHI LANGUAGE\n");
	printf("ENTER 4 TO CHOOSE HINDI LANGUAGE\n");
	printf("ENTER SOMETHING..... ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
		printf("YOU SELECT ENGLISH LANGUAGE");
		break;
		case 2:
		printf("YOU SELECT GUJARATI LANGUAGE");
		break;
		case 3:
		printf("YOU SELECT MARATHI LANGUAGE");
		break;
		case 4:
		printf("YOU SELECT HINDI LANGUAGE");
		break;
		default:
		printf("NUMBER YOU ENTERD IS INVALID");
		break;
	}
	
}
