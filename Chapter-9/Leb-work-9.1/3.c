#include<stdio.h>
main(){
	int i,n;
	printf("enter n :- ");
	scanf("%d",&n);
	
	char str[n];
	
	printf("enter the string :- ");
	scanf("%s",str);
	
	for(i=0;str[i] != '\0';i++){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]-('A'-'a');
		     }
		else{
			str[i]=str[i]-('a'-'A');
		
		}
		}
		printf("change case name = %s",str);
}
