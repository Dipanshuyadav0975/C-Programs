#include<stdio.h>
void main()
{
    int row ,col ,a[5][5];
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            a[row][col]=row*col;
        }
    }
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            printf("%d  ",a[row][col]);
        }
        printf("\n");
    }
}
