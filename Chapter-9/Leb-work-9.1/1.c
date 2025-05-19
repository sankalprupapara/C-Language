#include<stdio.h>
main(){
	int i,n;
	printf("enter n :- ");
	scanf("%d",&n);
	
	char str[n];
	
	printf("enter the string :- ");
	scanf("%s",str);
	
	for(i=0;str[i] != '\0';i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=str[i]-('a'-'A');
		     }
		}
		printf("Upercape name = %s",str);
}
