#include<stdio.h>
main(){
	int i,n,sum=0;
	float avg;
	printf("enter a size of aerry :- ");
	scanf("%d",&n);
	
	int a[n];
	
	for (i=0;i<n;i++){
		printf(" a[%d]:-",i);
		scanf("%d",&a[i]);
		
		sum=sum+a[i];
		avg=(float)sum/n;
	}
	printf("Average of aerry element :- .2%f",avg);
	
}
