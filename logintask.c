
#include<stdio.h>
#include<stdbool.h>
int main(){
  char pass[30];
  char name[50];
  char loginName[50];
  char loginpass[30];
 char flag[10];
    
    printf("Registeration Form : \n");
    printf("Enter your Name : ");
    scanf("%s",&name);
    printf("Enter your password : ");
    scanf("%s",&pass);
     printf("Enter true or 1 : ");
    scanf("%s",&flag);
    //char x="true"; 
    //sschar y="1";
      if(strcmp(flag,"true")==0||strcmp(flag,"1")==0){
    
    printf("Now Try login : \n");
    
    int state=1;
    do{

    printf("Name : ");
    scanf("%s",&loginName);
    printf("Password : ");
    scanf("%s",&loginpass);
   
    if(strcmp(loginName,name)==0&&strcmp(loginpass,pass)==0) 
    { 
      
      printf("Login Succesfuly");
    state=0;}                                                              
    else{
        printf("Incorrect Name or Password Try Again \n");
    }}while (state==1);}
    //******************
    else{
printf("please Enter true or 1\n");
    }
    //*****************
    return 0;
}