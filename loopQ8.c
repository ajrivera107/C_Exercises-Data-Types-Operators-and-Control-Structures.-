#include <stdio.h>

int main() {

int num;
int sum = 0;
int lastInt;

printf("Enter an integer: ");
scanf("%d", &num);

printf("The sum of the squares of the digits is: ");
while(num != 0) {

lastInt = num % 10;
sum = sum + lastInt * lastInt;
num /= 10;



}

printf("%d\n", sum);

return 0;

}
