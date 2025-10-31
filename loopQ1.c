#include <stdio.h>

int main() {
int inputs;
int sum = 0;
printf("Enter positive integers:\n");


while (1) {

	scanf("%d", &inputs);

       if (inputs <= 0) {
       break;
}       
	sum += inputs;
	
}
printf("Sum of integers: %d\n", sum);

return 0;

}

