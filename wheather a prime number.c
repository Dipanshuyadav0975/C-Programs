#include<stdio.h>
void main()
{

int i, num;
printf("Enter the number");
scanf("%d",&num);
if(num==1){
    printf("It's not a prime number .");
}

for(i=2;i<num;i++)
{
if(num%i==0){
printf("%d is not a prime number.",num);
break;}

}
if(i==num)
printf("%d is a prime number.",num);

}


