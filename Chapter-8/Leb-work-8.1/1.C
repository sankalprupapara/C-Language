#include<stdio.h>
main(){
	int i,n;
	
	printf("enter a size of aerry :- ");
	scanf("%d",&n);
	
	int a[n];
	
	for (i=0;i<n;i++){
		printf(" a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	printf("total element :- %d",n);
}
