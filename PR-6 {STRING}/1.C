#include<stdio.h>
#include<string.h>
main(){
	char str[50] ;
	printf("enter name :- ");
	scanf("%s",&str);
	int start = 0;
	int end = strlen(str)-1;
	int cheak=1;
	
	while (start < end){
		if(str[start]!=str[end]){
		cheak=0;	
		}
		start++;
		end--;
	}
    
    if(cheak){
			printf("Palindome string");
		}else{
			printf("Not Palindome string");
		}
}


