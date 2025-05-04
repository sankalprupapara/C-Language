#include<stdio.h>
main(){
    int n,i=1;
    printf("enter value of  n = ");
    scanf("%d",&n);
    do
    {
    	if(i%2==0){
    		printf("%d ",i);
    }
	 i++;	
	
	}while(i<=n);

}


