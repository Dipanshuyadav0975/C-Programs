// C= 5/9(F-32)
// F = C*9/5+32
#include<stdio.h>
void main()
{
    float frh , celsius ;
    printf("What is the temperature you want to change into Celsius");
    scanf("%f",&frh);
    celsius = (frh-32)*5/9;
     printf("The temperature in Celsius is %f ", celsius);
}
