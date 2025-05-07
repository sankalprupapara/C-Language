#include<stdio.h>
main(){
	int i,n,f=1;
	printf("Enter no :- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("Ans :- %d",f);
	
}
