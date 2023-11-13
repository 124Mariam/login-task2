
#include<stdio.h>
int main(){
  char pass[30];
  char name[50];
  char loginName[50];
  char loginpass[30];
    printf("Registeration Form : \n");
    printf("Enter your Name : ");
    scanf("%s",&name);
    printf("Enter your password : ");
    scanf("%s",&pass);
    //***********************
    printf("Now Try login : \n");
    //***********************
    int state=1;
    do{
    printf("Name : ");
    scanf("%s",&loginName);
    printf("Password : ");
    scanf("%s",&loginpass);
   
    if(strcmp(loginName,name)==0&&strcmp(loginpass,pass)==0) 
    { printf("Login Succesfuly");
    state=0;}                                                              
    else{
        printf("Incorrect Name or Password Try Again \n");
    }}while (state==1);
    //*****************
    return 0;
}