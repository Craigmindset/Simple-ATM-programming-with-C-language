#include<stdio.h>
#include<windows.h>
#include<time.h>

int main(void)
{
  system("color 9f");
 int pin=12345,option,enteredPin,count=0,amount=1;
 float balance = 10000;
 int continueTransaction = 1;

 time_t now;
 time(&now);
 printf("\n");
 printf("\t\t\t\t\t\t     %s",ctime(&now));
 printf("\n\t\t\t\t============Welcome to ATM banking==========");

 while (pin != enteredPin)
 {
  printf("\nplease enter your pin : ");
  scanf("%d", &enteredPin);
if (enteredPin != pin)
  {
    Beep(610,500);
    printf("invalid pin !!!");
  }
  count++;
   if (count == 3 && pin != enteredPin)
  {
  exit(0);
  }
}
while(continueTransaction != 0){
 printf("\n\t\t\t=============Transaction Availiable=========== ");
  printf("\n\t\t\t1 Withdrawals ");
  printf("\n\t\t\t2 Deposit");
  printf("\n\t\t\t3 Availiable Balance");
  printf("\n\t\t\t4 Transfer Fund");
  printf("\n\n\t Please select the options: ");
  scanf("%d", &option);
  switch(option){
    case 1: 
    while (amount % 500 != 0) {
      printf("\n\t\t Enter the amount: ");
      scanf("%d", &amount);
      if(amount % 500 !=0)
      printf("\n\t The amount shoulf be in multiple of 500");
    }
    if(balance < amount){
      printf("\n\t Sorry insufficent fund");
      amount = 1;
      break;
    }
    else {
      balance -= amount;
      printf("\n\t\t you have withdrawn .%d. Naira : Your new balance is %.2f", amount, balance);
      amount = 1;
      break; 
    }
    case 2:
    printf("\n\t\t Please enter the amount ");
    scanf("%d", &amount);
    balance += amount;
    
    printf("\n\t\t You have deposited .%d. Naira : Your new balance is %.2f", amount,balance);
    printf("\n\t\t\t ==============Thank you for banking with us ==========");
    amount = 1;
    break;  

    case 3:
    printf("\n\t\t your balance is Naira .%.2f",balance);
    break;

    default:
    Beep(610,500);  
    printf("\n\t\t Invalid Option!!!");
  }
  
  printf("\n\t\t Do you wish to continue with this transaction? Press 1[Yes], 0[No] ");
  scanf("%d",&continueTransaction);

}

 

return 0;
}