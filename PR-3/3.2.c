#include<stdio.h>
main(){
	int no,digi=0;
	printf("Enter no :- ");
	scanf("%d",&no);
	
	
	while(no>0){
		
	no=no/10;		
	digi++;
	}
	printf("digit %d",digi);
}
