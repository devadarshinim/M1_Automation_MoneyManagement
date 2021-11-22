#include<stdio.h>
#include"program.h"
void display(char *name,char *email,char *gender,int age, char *password,int ammount)
{
    
    printf("Name :  %s\n",name);
    printf("Email : %s\n",email);
    printf("Gender : %s\n",gender);
    printf("Age : %d\n",age);
    printf("Password : %s\n",password);
    printf("Balance : %d\n",ammount);
    printf("Thank you");
}
int compare(char a[],char b[]){
    
    int flag=0,i=0;  // integer variables declaration  
    while(a[i]!='\0' &&b[i]!='\0')  // while loop  
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}
int  withdraw(char *name,char *email,char *gender,int age, char *password,int amount,int withdrawammount){
    int i;
    if(amount<withdrawammount)
    {
        i=0;
    }
    else
    {
        i=amount- withdrawammount;
    }
    return i;
}
int deposit(char *name,char *email,char *gender,int age, char *password,int amount, int withdrawammount){
    int j=amount+ withdrawammount;
    return j;
}