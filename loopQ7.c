#include <stdio.h>
#include <string.h>

int main() {

char password[] = "correct_password";
char guess[50];

do {

printf("Enter password: ");
scanf("%s", guess);
	
if (strcmp(guess, password) != 0) {

printf("Incorrect password.\n");

}

} while (strcmp(guess, password) != 0);

printf("Access granted!\n");

return 0;
}
