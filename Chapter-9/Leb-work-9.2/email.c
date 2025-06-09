 #include<stdio.h>
#include<string.h>

main() {
    const char correctEmail[] = "sankalprupapara586@gmail.com";
    const char correctPassword[] = "1811";

    char email[100];
    char password[100];


    printf("Enter your email id :- ");
    gets(email);  


    printf("Enter your password :- ");
    gets(password);  

    
    if(strcmp(email,correctEmail)==0 && strcmp(password,correctPassword)==0){
        printf("Login successful!\n");
    }else{
        printf("Invalid email or password.\n Login failed.\n");
    }

}

