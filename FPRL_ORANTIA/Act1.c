#include <stdio.h>
int main(){
   int num1, num2;
   
   printf("Enter the first number:");
   scanf("%d", &num1);
   
   printf("Enter the first number:");
   scanf("%d", &num2);
   
   printf("\nResults:\n");
   printf("Sum = %d\n", num1 + num2);
   printf("Subtraction = %d\n", num1 - num2);
   printf("Multiplication = %d\n", num1 * num2);
   printf("Division = %d\n", num1 / num2);
   printf("Remainder = %d\n", num1 % num2);

    return 0;
}