#include<stdio.h>
main(){
	int a,b;
	printf("enter value a = ");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);
	
	a =a+b;
	b=a-b;
	a=a-b;
	printf("Value a%d",a);
	printf("Value b%d",b);
}
