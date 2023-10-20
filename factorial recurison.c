#include<stdio.h>
long int multiplynos(int num);
void main()
{
    int num;
    printf("ENTER A POSITIVE INTEGER = ");
    scanf("%d",&num);
    printf("FACTORIAL OF %d =%d",num,multiplynos(num));
}
long int multiplynos(int num)
{
    if (num>=1)
        return num*multiplynos(num-1);
    else
        return 1;
}
