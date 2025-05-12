#include<stdio.h>
main(){
	int i,n,sum;
	
	printf("enter a size of array :- ");
	scanf("%d",&n);
	
	int a1[n];
	int a2[n];
	
	for (i=0;i<n;i++){
		printf(" a1[%d]:-",i);
		scanf("%d",&a1[i]);
}
			printf("\n");
		
	for (i=0;i<n;i++){
		printf(" a2[%d]:-",i);
		scanf("%d",&a2[i]);
	}
	for (i=0;i<n;i++){
		sum = a1[i]+a2[i];
		printf("C array :- %d\n",sum);
	}
	
}

