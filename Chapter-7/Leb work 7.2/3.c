#include<stdio.h>
main(){
	int i,j,s;
	
	for(i=5;i>=1;i--){
	
		for(s=4;s>=0;s--){
		
			printf("  ");
		}
		for(j=5;j>=i;j--){
			printf(" %d",j);
		}
		printf("\n");
	}
}





