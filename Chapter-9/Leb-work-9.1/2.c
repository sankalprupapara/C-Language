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
		}
		printf("lowercase name = %s",str);
}
