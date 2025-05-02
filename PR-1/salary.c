#include<stdio.h>
main(){
	float base_salary,hra_per,da_per,ta_per,gross_salary;
	float hra_amount,da_amount,ta_amount;
	
	printf("enter your base salary = ");
	scanf("%f",&base_salary);
	printf("enter  HRA persantage = ");
	scanf("%f",&hra_per);
	printf("enter DA persantage = ");
	scanf("%f",&da_per);
	printf("enter TA persantage = ");
	scanf("%f",&ta_per);

    hra_amount = (hra_per * base_salary)/100 ;
    da_amount = (da_per * base_salary)/100 ;
    ta_amount = (ta_per * base_salary)/100 ;
    
    gross_salary= (base_salary + hra_amount + da_amount + ta_amount) ;
    
    printf("gross salary = %.2f",gross_salary);    	
}

