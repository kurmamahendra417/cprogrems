// Online C compiler to run C program online
#include <stdio.h>
void main() 
{
    int i,j,k;
    for(i=1;i<5;i++)
    {
        for(j=i;j<5;j++)
    {
    printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("*");
    }
    printf("\n");
}
}
