#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the a");
    scanf("%d",&a);
    printf("Enter the b");
    scanf("%d",&b);
    printf("Enter the opreator");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("result is %d",a+b);
        break;
        case '-':
        printf("result is %d",a-b);
        break;
        case '*':
        printf("result is %d",a*b);
        break;
        case '/':
        printf("result is %d",a/b);
        break;
        default:
        printf("invalid choice!");
    }
    return 0;
}