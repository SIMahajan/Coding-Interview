#include<stdio.h>
void main()
{
    int a, b, add,mult,div,sub,mod;
    printf("insert first number ");
    scanf("%d", &a);
    printf("insert second number ");
    scanf("%d", &b);
    add = a + b;
    printf("The Addition of %d and %d is %d \n", a, b, add);
    sub = a - b;
    printf("The substraction of %d and %d is %d\n", a, b, sub);
    mult = a * b;
    printf("The multiplication of %d and %d is %d\n", a, b, mult);
    div = a / b;
    printf("The divission of %d and %d is %d\n", a, b, div);
    mod = a % b;
    printf("The modulo of %d and %d is %d\n", a, b, mod);
}
/* insert first number 10
insert second number 5
The Addition of 10 and 5 is 15
The substraction of 10 and 5 is 5
The multiplication of 10 and 5 is 50
The divission of 10 and 5 is 2
The modulo of 10 and 5 is 0*/