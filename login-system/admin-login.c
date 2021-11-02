#include <stdio.h>
#include <string.h>
// BY USING IF ELSE AND STRCMP METHOD
int main(){
    char username[10];
    char password[5];

    printf("WELCOME USERS\n");
    printf("Enter ur username: ");
    scanf("%s",username);
    printf("Enter ur password: ");
    scanf ("%s",password);
    if(strcmp(username,"admin")==0){
    if(strcmp(password,"Dev")==0)
    printf("\nADMIN LOGIN SUCESSFULL");
    }
    else{
        printf("Wrong details, kindly enter correct username or password");
    }
}