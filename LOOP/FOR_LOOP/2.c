#include<stdio.h>
main(){
	int r,rev,no=2952;
	
	while(no>0){
		r=no%10;
		rev=(rev*10)+r;
		no=no/10;
		
	}
	printf("%d",rev); 
	
}
