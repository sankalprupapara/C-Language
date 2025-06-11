#include<stdio.h>
main(){
	char ch;
	printf("ENTER ANY CHARACTER :- ");
	scanf("%c",&ch);
	
	switch(ch){
	case 'a':
	case 'e':			
	case 'i':
	case 'o':
	case 'u':
		printf("The character is a vowel.\n");
		break;
	
	 default:
	 	printf("The character is a constant.\n");
	 	break;	
	 }
}
