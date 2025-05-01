#include<stdio.h>
main(){
	int i,n;
	printf("ENTER VALUE OF N =");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
