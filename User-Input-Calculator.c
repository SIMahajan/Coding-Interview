#include <stdio.h>
#include <float.h>
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

// using switch case
// double simpleCalc(double num1, double num2, char op)
// {
//     double res;

//     // Define all four operations in the corresponding
//     // switch-case
//     switch (op)
//     {
//     case '+':
//         res = num1 + num2;
//         break;
//     case '-':
//         res = num1 - num2;
//         break;
//     case '*':
//         res = num1 * num2;
//         break;
//     case '/':
//         res = num1 / num2;
//         break;
//     default:
//         printf("Error! Operator is not correct.\n");
//         return -DBL_MAX;
//     }
//     return res;
// }

// int main()
// {
//     char op;
//     double num1, num2, res;

//     // Read the operator
//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &op);

//     // Read the two numbers
//     printf("Enter two operands: ");
//     scanf("%lf %lf", &num1, &num2);

//     res = simpleCalc(num1, num2, op);

//     // Print the result
//     if (res != -DBL_MAX)
//         printf("Result: %.2lf\n", res);

//     return 0;
// }

// Using if-else Statement
// double simpleCalc(double num1, double num2, char op)
// {
//     int res;

//     // Perform the operation corresponding to the given
//     // operator
//     if (op == '+')
//         res = num1 + num2;
//     else if (op == '-')
//         res = num1 - num2;
//     else if (op == '*')
//         res = num1 * num2;
//     else if (op == '/')
//         res = num1 / num2;
//     else
//     {
//         printf("Error! Operator is not correct.\n");
//         return -DBL_MAX;
//     }

//     return res;
// }

// int main()
// {
//     char op;
//     double num1, num2, res;

//     // Read the operator
//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &op);

//     // Read the two numbers
//     printf("Enter two operands: ");
//     scanf("%lf %lf", &num1, &num2);

//     // Evalute
//     res = simpleCalc(num1, num2, op);

//     // Print the result
//     if (res != -DBL_MAX)
//         printf("Result: %.2lf\n", res);

//     return 0;
// }