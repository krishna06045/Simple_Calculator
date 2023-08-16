#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float valueOne,valueTwo,answer;
    char operator;

    printf("Enter calculation:\n");
    scanf("%f %c %f", &valueOne, &operator, & valueTwo);

    switch (operator)
    {
    case '/':
        answer = valueOne / valueTwo;
        break;
    case '*':
        answer = valueOne * valueTwo;
        break;
    case '+':
        answer = valueOne + valueTwo;
        break;
    case '-':
        answer = valueOne - valueTwo;
        break;
    case '^':
        answer = pow(valueOne, valueTwo);
        break;
    case ' ':
        answer = sqrt(valueTwo);
        break;
    default:
        goto fail;
    }
    printf("%g%c%g =  %g\n", valueOne, operator, valueTwo, answer);
    return 0;
fail:
    printf("Fail");

}