#include<stdio.h>
int main()
{
    int x;/*comments are unneccessary*/
    printf("Enter a number \n");
    scanf("%d",&x);
    x%2==0 && x%3==0?(printf("The number is divisible by 2 and 3")):(x%2==0 && x%3!=0?(printf("The number is divisible only by 2")):(x%2!=0 && x%3==0?(printf("The number is divisible by 3")):printf("The number is not divisible by either 2 or 3")));



}
