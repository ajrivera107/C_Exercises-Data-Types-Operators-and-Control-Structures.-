#include <stdio.h>

int main() {

int num;
int reverse = 0;
int lastInt;
int palindrome;

printf("Enter a number: ");
scanf("%d", &num);

palindrome = num;

while (num != 0) {

lastInt = num % 10;
reverse = reverse * 10 + lastInt;
num /= 10;

}

if (palindrome == reverse) {
	printf("%d is a palindrome number.\n", palindrome);
} else
	printf("%d is not a palindrome number\n", palindrome);

return 0;

}
