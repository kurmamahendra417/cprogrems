// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void main() {
 int i,n;   
    printf("enter n");
    scanf("%d",&n);
    int count=0;
    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        {
        count ++;
    }
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    }
