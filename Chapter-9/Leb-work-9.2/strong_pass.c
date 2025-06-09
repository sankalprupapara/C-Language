#include<stdio.h>
main(){
	char st[50],ch;
	int len,i;
	int cap=0,sma=0,dig=0,l=0;
	
	printf("ENTER YOUR PASSWORD :- ");
	gets(st);
	
	for(len=0;st[len]!='\0';len++){
		len++;
	}
	for(i=0;st[i]!='\0';i++){
		ch=st[i];
		if(ch>='A' && ch<='Z'){
			cap=1;
		}
		if(ch>='a' && ch<='z'){
			sma=1;
		}
		if(ch>='0' && ch<='9'){
			dig=1;
		}
	}
	if(len<6){
		printf("password must be at least 6 laters.");
	}
	else if (cap && sma && dig){
		printf("your password is very strong.");
	}else{
		printf("At least one capital letter\n");
		printf("At least one small letter\n");
		printf("At least one digit letter\n");
		
	}
}

