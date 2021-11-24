#include<stdio.h>

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
int main(){
    printf("Welcome to Money management Sytem \n");
    int ch;
    char name[50];
    char email[50];
    char cpassword[1000];
    char password[1000];
    int age, amount;
    char gender[1000];
    int displayData;
    printf("Do you want to create a account? press 0 if Yes : ");
    scanf("%d", &ch);
    if(ch==0)
    {
        printf("Register here\n");
        printf("Enter name : ");
        scanf("%s",name);
    
        printf("Enter email adress : ");
        scanf("%s",email);
        printf("Enter gender M/F : ");
        scanf("%s",gender);
        printf("Enter age : ");
        scanf("%d",&age);
        printf("Enter password : ");
        scanf("%s",password);
        printf("Conform password : ");
        scanf("%s", cpassword);
        printf("Enter initial ammount : ");
        scanf("%d",&amount);
        printf("Do you like to display the data : Press 1 \nDo you want to withdraw the ammount : Press 2 \nDo you want to deposit the ammount : Press 3 \nTo exit : Press 4 : \nEnter your option : ");
        scanf("%d",&displayData);
        if(displayData==1)
        {
            printf("Enter your password to display");
            char cpass[100];
            scanf("%s",cpass);
            int value=compare(password,cpass);
            if(value==0)
            {
                printf("Name :  %s\n",name);
                printf("Email : %s\n",email);
                printf("Gender : %s\n",gender);
                printf("Age : %d\n",age);
                printf("Password : %s\n",password);
                printf("Balance : %d\n",amount);
                printf("Thank you");
            }
            else
            {
                printf("Incorrect password");
                printf("Try again");
            }
        }
        if(displayData==2)
        {
            printf("Enter your password to display : ");
            char cpass[100];
            scanf("%s",cpass);
            int value=compare(password,cpass);
            if(value==0)
            {
                printf("Enter amount that you want to withdraw : ");
                int withdrawamount;
                scanf("%d",&withdrawamount);
                int j= withdraw(name, email,gender, age, password,amount,withdrawamount);
                if(j==0)
                {
                    printf("Insufficient Balance");
                }
                else
                {
                    printf("The ammount is deduced, The balance is %d", j);
                }
            }
            else
            {
                printf("Incorrect password");
                printf("Try again");
            }
        }            
        if(displayData==3)
        {
            printf("Enter your password to display");
            char cpass[100];
            scanf("%s",cpass);
            int value=compare(password,cpass);
            if(value==0)
            {
                printf("Enter amount that you want to deposit : ");
                int withdrawamount;
                scanf("%d",&withdrawamount);
                int j= deposit(name, email,gender, age, password,amount,withdrawamount);
                printf("The amount is added, the new balance is %d", j);
            }
            else
            {
                printf("Incorrect password");
                printf("Try again");
            }
        }   
        else
        {
            printf("Successfuly registered and exited");
        
        }
    }

    return 0;
}
