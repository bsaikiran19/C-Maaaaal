#include <stdio.h>
#include <stdlib.h>
char name[20];
void menu();
void deposit_money();
void transaction_details();
void account_details();
void transfer_money();
void account_details();
void withdraw_money();
void last_details();

int amt,dip_amt,trans_amt,total_amount=10000,account_no,raccount_no,w_money;
int main(){

printf("Enter your name :");
gets(name);
printf("Enter your account number :");
scanf("%d",&account_no);
  menu();
int choice;
 printf("Choose :");
 scanf("%d",&choice);


 switch(choice){
    case 1:
        deposit_money();
        break;
    case 2:
        transfer_money();
        break;
    case 3:
      transaction_details();
      break;
    case 4:
     account_details();
     break;
    case 5:
     withdraw_money();
     break;
    case 6:
        last_details();
     exit(0);
    default:
        printf("Invalid Number !!!");
 }
 
     return 0;
}


void menu(){
    printf("\t \t Welcome To KIITIAN FINTECH \t\t\n");
   
    printf("1. Deposit Money\n");
    printf("2. Transfer Money \n");
    printf("3. Transaction Details \n");
    printf("4. Account Details \n");
    printf("5. Withdraw Money \n");
    printf("6. Exit \n");
}
void deposit_money(){
 
    printf("DEPOSITING MONEY \n");
    printf("Enter the amount :");
    scanf("%d",&dip_amt);
    total_amount+=dip_amt;
    printf("Rs.%d is deposited to your current balance. \n",dip_amt);
    printf("The current balance is %d",total_amount);

}
void transfer_money(){
    printf("TRANSFER MONEY \n");
    printf("Enter the receiver account number :\n");
    scanf("%d",&raccount_no);
    printf("Enter the amount to be transferred:\n");
    scanf("%d",trans_amt);
    if(trans_amt>total_amount)
{
    printf("Insufficient Balance.Enter a valid amount.\n");
}
else{
    printf("Rs.%d is transferred to %d.\n",trans_amt,raccount_no);
    }
    total_amount-=trans_amt;
printf("Current balance in your bank account : %d",total_amount);
}


void account_details(){
    printf("TRANSACTION DETAILS \n");
    printf("Account holder name : %c\n",name);
    printf("Account number : %d\n",account_no);
    printf("Current balance in your account : %d",total_amount);
}




void withdraw_money(){
    printf("WITHDRAW MONEY \n");
    printf("Enter the amount :");
    scanf(" %d",w_money);
    if(w_money>total_amount){
        printf("Insufficient amount !!!");
    }
else{
    printf("Rs.%d is withdrawn from your bank account. \n",withdraw_money);
}
    total_amount-=w_money;
    printf("Current balance in your bank account : %d\n",total_amount);
}



void transaction_details(){
    printf("TRANSACTION DETAILS \n");
    printf("Account number of holder : %d\n",account_no);
    printf("Name of the account holder : %c\n",name);
}



void last_details()
    {
        printf("Name : %s \n", name);
        printf("Account No. :%d \n ",account_no);
        printf("Current Balance : %d \n",total_amount);


        printf("Enter any key......");
        getch();
    }
