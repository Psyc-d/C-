#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int divide(int, int);
int main()
{
int answer,num1, num2, choice;
do{
printf("[0] Exit\n[1] Add\n[2] Subtract\n[3] Multiply\n[4] Divide\n[5] sine ");
scanf("%d", &choice);

switch(choice){
    case 0:
        return 0;
        break;
    case 1:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("The answer is %d", add(num1,num2));
        break;
    case 2:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("The answer is %d ", sub(num1,num2));
        break;
    case 3:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("The answer is %d", mul(num1,num2));
        break;
    case 4:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("The answer is %d", divide(num1,num2));
        break;

    default:
        printf("That is not a valid choice.");
        break;
}
printf("\nDo you want to continue?\n 1 for yes\n 0 for no");
printf("\n");
scanf("%d",&answer);
}
while(answer==1);

}

    //Addition
int add(int x,int y){
    int z = x + y;
    return z;
}   
//Subtraction
int sub(int a,int b){
    int c = a - b;
    return  c;
}   
//Multiplication
int mul(int d,int e){
    int f = d * e;
    return f;
    }
//Division
int divide	(int g,int h){
    int i = g / h;
    return i;
}










