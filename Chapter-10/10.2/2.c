#include<stdio.h>
void lenght();

main(){
	lenght();
}
void lenght(){
	char str[100];
	int l;
	
	printf("enter string :- ");
	scanf("%s",&str);
	
	for(l=0;str[l]!='\0';l++){
		
	}
	printf("LENGHT OF YOUR STRING :- %d",l);
} 
