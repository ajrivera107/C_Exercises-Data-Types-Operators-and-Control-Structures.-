#include <stdio.h>
#include <stdbool.h>

int main() {
int x = 0;
printf("Current x value: %d\n", x);
x++;
printf("Increment x++: %d\n", x);

x = 0;
printf("Current x value: %d\n", x);
++x;
printf("Increment ++x: %d\n", x);

x = 0;
printf("Current x value: %d\n", x);
x--;
printf("Decrement x--: %d\n", x);

x = 0;
printf("Current x value: %d\n", x);
--x;
printf("Decrement --x: %d\n", x);

int a = 9;
int b = 5;

printf("Initial values: a = %d, b = %d\n\n", a, b);

a -= b;
printf("Assignment operation -=: %d\n", a);
a = 9; b = 5;

a += b;
printf("Assignment operation: +=: %d\n", a);
a = 9; b = 5;

a *= b;
printf("Assignment operation: *=: %d\n", a);
a = 9; b = 5;

a /= b;
printf("Assignment operation /=: %d\n", a);
a = 9; b = 5;

a %= b;
printf("Assignment operation %%=: %d\n", a);
a = 9; b = 5;

a &= b;
printf("Assignment operation &=: %d\n", a);
a = 9; b = 5;

a |= b;
printf("Assignment operation |=: %d\n", a);
a = 9; b = 5;

a ^= b;
printf("Assignment operation ^=: %d\n", a);
a = 9; b = 5;

a >>= 1;
printf("Assignment operation a >>= 1: %d\n", a);
a = 9; b = 5;

a <<= 2;
printf("Assignment operation a <<= 2: %d\n", a);


bool isLoggedIn = true;
bool isAdmin = false;
printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");

int isLoggedIn2 = 1;
int isAdmin2 = 0;
printf("Integers:\n");
printf("Regular user: %s\n", (isLoggedIn2 && !isAdmin2) ? "true" : "false");
printf("Has access: %s\n", (isLoggedIn2 || isAdmin2) ? "true" : "false");
printf("Not logged in: %s\n", (!isLoggedIn2) ? "true" : "false");


int a1 = 1, b1 = 0, c1 = 1;

printf("a && b || c: %d\n", a1 && b1 || c1);
printf("(a && b) || c: %d\n", (a1 && b1) || c1);
printf("a || b && c: %d\n", a1 || b1 && c1);
printf("(a || b) && c: %d\n", (a1 || b1) && c1);
printf("!a && b): %d\n", !a1 && b1);

return 0;
}
