#include<stdio.h>
main(){
	float const j=0.001;
	int p,n,r;
	float ans;
	printf("enter your principle amount :");
	scanf("%d",&p);
	printf("enter your time :");
	scanf("%d",&n);
	printf("enter your rate :");
	scanf("%d",&r);
	ans = j * p * n * r;
	printf("%f",ans);
	
	
}
