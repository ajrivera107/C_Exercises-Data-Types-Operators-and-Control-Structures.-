#include <stdio.h>

int main() {

int num;
int i;
int sum = 1;

printf("Enter a positive integer: ");
scanf("%d", &num);

printf("The factorial of %d is: ", num);

for (i = 1 ; i <= num ; i++) {
	
	sum = sum * i; 
}
printf("%d\n", sum);
return 0;

}
