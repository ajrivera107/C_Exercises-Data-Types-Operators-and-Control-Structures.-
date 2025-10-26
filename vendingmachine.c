#include <stdio.h>

int main() {

int selection = 0;
printf("Vending machine menu:\n");
printf("1. Soda - $1.50\n");
printf("2. Water - $1.00\n");
printf("3. Chips - $2.00\n");
printf("4. Candy - $1.25\n");
printf("Make your choice: (1-4)\n");
scanf("%d", &selection);

switch (selection) {
case 1:
printf("Soda - $1.50\n");
break;

case 2:
printf("Water - $1.00\n");
break;

case 3:
printf("Chips - $2.00\n");
break;

case 4:
printf("Candy - $1.25\n");
break;

default:
printf("Invalid selection.\n");
}

return 0;
}
