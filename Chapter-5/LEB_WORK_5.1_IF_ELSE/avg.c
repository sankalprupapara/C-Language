#include<stdio.h>
main(){
	int m,c,p;
	float avg ;
	printf("ENTER MARKS OF MATHS :- ");
	scanf("%d",&m);
	printf("ENTER MARKS OF CHEMISTRY :- ");
	scanf("%d",&c);
	printf("ENTER MARKS OF PHYSICS :- ");
	scanf("%d",&p);
	avg= (m+c+p)/3;
	printf("%f",avg);
}
