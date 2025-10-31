#include <stdio.h>
#include <stdlib.h>   
#include <time.h>     

int main() {

int guess;
int random;

srand(time(0));

random = rand() % 20 + 1;

printf("Guess the number between 1 and 20:\n");

do {
	scanf("%d", &guess);

if (guess > random) {
	printf("Lower!\n");

} else if (guess < random) {
	printf("Higher!\n");

} else {
	printf("Correct!\n");

}

} while (guess != random);

    return 0;
}
