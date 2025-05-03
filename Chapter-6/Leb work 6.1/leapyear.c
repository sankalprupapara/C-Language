#include<stdio.h>
main(){
	int n1,n2;
	
	printf("Enter first value = ");
	scanf("%d",&n1);
	printf("Enter second value = ");
	scanf("%d",&n2);
	
	int i=n1;
	while(i<n2){
		i++;
		if(i%4 == 0){
			printf("%d ",i);
		}
	}
	
}
