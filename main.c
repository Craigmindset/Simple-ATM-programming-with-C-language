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

  printf("\n\t\t\t=============Transaction Availiable=========== ");
  printf("\n\t\t\t1 Withdrawals ");
  printf("\n\t\t\t2 Deposit");
  printf("\n\t\t\t3 Transfers");
  printf("\n\t\t\t4 Availiable Balance");
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
      printf("\n\t\t you have withdrawn .%d. Naira \n,your new balance is %.2f", amount, balance);
      amount=1;
      break;
    }
  }


}