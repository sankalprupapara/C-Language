#include<stdio.h>
main(){
	int m;
	printf("ENTER YOUR MARK OUT OF 100 = ");
	scanf("%d",&m);
	
	if(m>90){
		printf("YOU GET A GRADE");
		
	}else if(m>80 && m<=90){
		printf("YOU GET B GRADE");
		
	}else if(m>70 && m<=80){
		printf("YOU GET C GRADE");
		
	}else if(m>60 && m<=70){
		printf("YOU GET D GRADE");
		
    }else if(m>50 && m<=60){
		printf("YOU GET E GRADE");
		
	}else if(m>40 && m<=50){
		printf("YOU GET F GRADE");
	}else{
		printf("YOU ARE FAIL");
		printf("BETTER LUCK NEXT TIME");
	}
}
