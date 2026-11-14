#include<stdio.h>
int main() {
    int a,b;
    char op;
    printf("enter the value ");
    scanf("%d %d" , &a , &b);
    printf("Enter your choice : +,-,*,%,/");
    scanf(" %c", &op);
    switch (op)
    {
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        printf("%d", a/b);
        break;
        case '%':
        printf("%d", a%b);
        default:
        break;
        printf("invalid");
    }
    return 0;
}