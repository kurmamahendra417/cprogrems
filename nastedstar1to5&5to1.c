// Online C compiler to run C program online
#include <stdio.h>
void main() 
{
    int i,j;
    for(i=1;i<=5;++i)
    {
        for(j=1;j<=i;++j)
    {
        printf("*");
}
printf("\n");
}
        for(i=1;i<=5;++i)
{
    for(j=5;j>=i;--j)
    {
        printf("*");
    }
    printf("\n");
}
}