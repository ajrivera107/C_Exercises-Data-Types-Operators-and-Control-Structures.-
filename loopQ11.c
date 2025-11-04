#include <stdio.h>

int main() {

int money = 1000;
int choice;
int deposit;
int withdrawal;

printf("Welcome to the ATM!\n");

do {
	printf("1. Check Balance\n");
	printf("2. Deposit\n");
	printf("3. Withdraw\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

switch (choice) {

	case 1:
		printf("Your balance is: $%d\n", money);
		break;
	case 2:
		printf("Enter deposit amount: ");
		scanf("%d", &deposit);
		money = money + deposit;
		printf("Deposit sucessful. Your new balance is $%d\n", money);
	       break;	
	case 3:
		printf("Enter withdrawal amount: ");
		scanf("%d", &withdrawal);
		money = money - withdrawal;
		printf("Withdrawal successful. Your new balance is $%d\n", money);
		break;
	case 4:
		printf("Thank you for using the ATM!\n");
		break;

}
}
while (choice != 4);


return 0;
}
