#include<stdio.h>
main(){
	char ch;
	 ch = 'A';
	
	for(;ch<='Z';ch++){
		printf("%c ",ch);
		ch+=3;
	}
}
