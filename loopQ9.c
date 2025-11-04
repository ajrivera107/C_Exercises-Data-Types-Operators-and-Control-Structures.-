#include <stdio.h>

int main() {

int start;
int end;
int i;
int j;

printf("Enter start of range: ");
scanf("%d", &start);
printf("Enter end of range: ");
scanf("%d", &end);

printf("Prime numbers between %d and %d are:\n", start, end);

for (i = start; i <= end; i++) {

	int primeInt = 1;

 for (j = 2; j * j <= i; j++) {

	if ( i % j == 0) {
	primeInt = 0;
	break;
}

}

if (primeInt)
	printf("%d ", i);

}
printf("\n");

return 0;
}
