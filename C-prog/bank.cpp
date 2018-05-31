#include<stdio.h>
#include<stdlib.h>
struct newacc
{
char name[30];
int day,month,year;
int salary;
int deposit;
char password[20];
char passagain[20];
};
struct io
{
int acc;
int value;
};

int main()
{int choice;
  printf("Welcome to the bank!, we here like to take your money\n");
  printf("To keep it safe of course!\n");
  printf("Please enter the choice of activity\n1.\tCreating new account\n2.\tCash Deposit\n3.\tCash withdrawal\n4.\tDisplay Account information\n5.\tLog out\n6.\tClearing the output screen and display available options\n");
  scanf("\n%d\n",&choice);
      switch (choice) {
case 1:
label1:
printf("You have chosen wisely oh young padawan, come now for there is a lot more left to do\n");
printf("please give your name, date of birth, salary pa, and the deposit you would like to make\n");
     newacc n1;
  scanf("%s %d %d %d %d %d",n1.name,&n1.day,&n1.month,&n1.year,&n1.salary,&n1.deposit);
  case 4:
int jump;
  printf("Have you made an account yet?\n 1 or 0\n");
scanf("%d",&jump);
if(jump == 0)
{
  goto label1;
}


printf("%s %d %d %d %d %d",n1.name,n1.day,n1.month,n1.year,n1.salary,n1.deposit);

      break;

case 2:

struct io i1;
printf("Enter your account number and the amount of money you want to deposit\n");
scanf("%d %d",&i1.acc,&i1.value);
break;
case 3:
struct io o1;
printf("Enter your account number and the amount of money you want to withdraw\n");
scanf("%d %d",&o1.acc,&o1.value);
break;
case 5:
exit(0);
break;
case 6:
system("clear");
break;
default:
goto label1;

}
}
