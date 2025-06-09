#include<stdio.h>
void sum();

main(){
	sum();
	
}
void sum(){
	
	int n,i,sum=0;
	
	printf("ENTER SIZE OF ARRAY :- ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n ;i++){
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
     
	printf("sum :- %d",sum);
}
