#include <stdio.h>
void main() {
 int i,n,a=0,b=1,c=a+b;   
    printf("enter n");
    scanf("%d",&n);
    printf("%d%d",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}
    
