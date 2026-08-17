#include<stdio.h>

int main()
{
    int Value1 = 0,Value2 = 0,Ans = 0;

    printf("Enter First number : \n");
    scanf("%d",&Value1);

    printf("Enter Second number : \n");
    scanf("%d",&Value2);

    Ans = Value1 + Value2 ;      //Business Logic

    printf("Addition is : %d\n",Ans);

    return 0;
}