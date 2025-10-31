#include <stdio.h>

int main() {

int num;
int current = 0;
int next = 1;
int sum = 0;
int i = 1;


printf("Enter number for Fibonacci:");
scanf("%d", &num);

printf("Fibonacci sequence: ");

while (i <= num) {

	printf("%d ", current);
	sum = current + next;
	current = next;
	next = sum;
	i++;
}

printf("\n");

return 0;
} 

