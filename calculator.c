#include <stdio.h>

int main() {
int operator;
int a, b;
while(1) {
printf("\nMENU\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Remainder\n");
printf("6. Exit\n"); 
printf("Enter your choice: ");
scanf("%d", &operator);       
if (operator == 6) {
printf("Exiting calculator. Goodbye!\n");
break;
}       
if (operator < 1 || operator > 6) {
printf("Invalid choice! Please choose a number between 1 and 6.\n");
continue; 
}       
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);        
switch (operator) {
case 1:
printf("Result = %d\n", a + b);
break;
case 2:
printf("Result = %d\n", a - b);
break;
case 3:
printf("Result = %d\n", a * b);
break;
case 4:
if (b == 0) {
printf("Error: Cannot divide by zero\n");
} else {
printf("Result = %d\n", a / b);
}
break;
case 5:
if (b == 0) {
printf("Error: Cannot divide by zero\n");
} else {
printf("Result = %d\n", a % b);
}
break;
}
}    
return 0;
}