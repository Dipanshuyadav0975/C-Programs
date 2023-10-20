#include<stdio.h>
void main()
{
int num1 , num2 , swap;
printf("Write down Number_1 = ");
scanf("%d",&num1);
printf("\nWrite down Number_2 = ");
scanf("%d",&num2);
swap = num1;
num1= num2;
num2 = swap;
printf("The swaped numbers\n ");
printf("Number_1 = %d.\nNumber_2 = %d.",num1,num2);

}
