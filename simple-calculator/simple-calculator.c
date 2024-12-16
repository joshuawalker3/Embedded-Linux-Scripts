/**
* simple-calculator.c prompts user for two numbers
 * and adds them.
 *
 * This program was written as a test to add executables
 * to a poky distribution
 *
 * @author Joshua Walker
 * @version 1.0
 * @date 12/15/24
*/

#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum is: %d\n", sum);

    return 0;
}