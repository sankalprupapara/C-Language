#include<stdio.h>
main(){
	int a,n1,n2,s;
	
	while(1){
	
	printf("****WHICH OPERTOR YOU USE****\n");
	printf("press 1 to sum\n");
	printf("press 2 to min\n");
	printf("press 3 to div\n");
	printf("press 4 to mul\n");
	printf("press 5 to mod\n");
	printf("press 0 to exit\n");
	printf("\n");	
	printf("press something :- ");
	scanf("%d",&a);
	
	if(a==0){
		printf("you exit to the calculater\n");
		break;
	}
	 if(a<0 || a>5){
		printf("your choice is invaild\n");
		printf("please enter vaild choice\n");
	    continue;	
	}
	 printf("enter no1 :- ");
	 scanf("%d",&n1);
	 printf("enter no2 :- ");
	 scanf("%d",&n2);
	 
	 switch(a){
	 	
	        case 1 :
	 	       s = n1+n2;
	 	       printf("sum of n1 and n2 :- %d\n",s);
	 	       
	 	       break;
	 	    case 2 :
	 	       s = n1-n2;
	 	       printf("min of n1 and n2 :- %d\n",s);
	 	       
	 	       break;
	 	    case 3 :
	 	       s = n1/n2;
	 	       if(n2==0){
	 	       	 printf("not vaild");
				}else{
					printf("div of n1 and n2 :- %d\n",s);
				}
	 	        break;
	 	    case 4 :
	 	       s = n1*n2;
	 	       printf("mul of n1 and n2 :- %d\n",s);
	 	       
	 	       break;
	 	    case 5 :
	 	       s = n1%n2;
	 	       if(n2==0){
	 	       	 printf("not vaild");
				}else{
					printf("mod of n1 and n2 :- %d\n",s);
				}
	 	        break;
	 	
	 	      
	 	      
    }
}
}


