#include<stdio.h>
main (){
	int const k=2;
	float const PI=3.14;
	int r;
	float ans;
	printf("enter your object redius :");
	scanf("%d", &r);
	ans = k*PI*r;
	printf("%f", ans);
}
