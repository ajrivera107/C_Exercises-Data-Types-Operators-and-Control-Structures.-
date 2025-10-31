#include <stdio.h>

int main() {

int num;
int counter = 0;

printf("Enter a positive integer:\n");
scanf("%d" , &num);

for(counter = 0; counter <= 10; counter++) {

	printf("%d * " , num);
	printf("%d = " , counter);
	printf("%d\n" , num * counter);

}

return 0;
}
