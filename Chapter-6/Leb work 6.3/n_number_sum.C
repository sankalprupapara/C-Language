#include<stdio.h>
main(){
	int n,i,sum=0;
	printf("Enter no :-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=i+sum;
		
	}
	printf("%d ",sum);
	
}
