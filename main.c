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
  printf("\n\t\t4 Transfers");
  printf("\n\t\t\t4 Availiable Balance");


}