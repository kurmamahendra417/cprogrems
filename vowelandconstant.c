#include<stdio.h>
void main(){
    char ch;
    printf("enter the charater");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("entered charater is vowul");
    }
    else
    {
        printf("entered charater is constant");
    }
}
