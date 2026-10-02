#include <stdio.h>  
int main() {  
int operator;  
int a, b;  
printf("MENU\n");  
printf("1. Addition\n");  
printf("2. Subtraction\n");  
printf("3. Multiplication\n");  
printf("4. Division\n");  
printf("5. Remainder\n");  
printf("Enter your choice: ");  
scanf("%d", &operator);  
printf("Enter two numbers: ");  
scanf("%d", &a);
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
default:  
printf("Invalid choice\n");  
}  
return 0;  
} 
