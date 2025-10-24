#include <stdio.h>

int main() {
int myInt = 7;
float myFloat = 5.99f;
double myDouble = 19.99;
char myChar = 'M';

printf("Integer: %d\n", myInt);
printf("Float: %f\n", myFloat);
printf("Double: %lf\n", myDouble);
printf("Character: %c\n", myChar);


char a = 97, b = 98, c = 99, x = 120, y = 121, z = 122;
char A = 65, B = 66, C = 67, X = 88, Y = 89, Z = 90;

printf("Characters: %c %c %c %c %c %c %c %c %c %c %c %c\n", a, b, c, x, y, z, A, B, C, X, Y, Z);


float floatPie = 3.14e2f;
double doubleAvo = 6.022e23;

printf("Scientific notation for float: %f\n", floatPie);
printf("Scientific notation for double: %lf\n", doubleAvo);


float myFloatNum = 3.5f;

printf("Decimal Precision of 1: %.1f\n", myFloatNum);
printf("Decimal Precision of 2: %.2f\n", myFloatNum);
printf("Decimal Precision of 4: %.4f\n", myFloatNum);
printf("Decimal Precision of 6: %.6f\n", myFloatNum);


int myInt1;
float myFloat1;
double myDouble1;
char myChar1;

printf("Size of int: %zu\n", sizeof(myInt1));
printf("Size of float: %zu\n", sizeof(myFloat1));
printf("Size of double: %zu\n", sizeof(myDouble1));
printf("Size of character: %zu\n", sizeof(myChar1));


int m = 7;
int n = 3;
float sum = (float) 7 / 3;

printf("Result with decimal precision of 3: %.3f\n", sum);

float percent = sum * 100;
printf("Result as a percent: %.2f%%\n", percent);


int normalInt = 1000; // standard int
double normalDouble = 3.14; // standard double
short int small = -100; // smaller int
unsigned int count = 25; // only positive int
long int big = 1234567890; // larger int
long long int veryBig = 9223372036854775807; // very large int
unsigned long long int huge = 18446744073709551615U; // very large, onlypositive
long double precise = 3.141592653589793238L; // extended precision

printf("Normal int: %d\n", normalInt);
printf("Normal double: %lf\n", normalDouble);
printf("Short int: %hd\n", small);
printf("Unsigned int: %u\n", count);
printf("Long int: %ld\n", big);
printf("Long long int: %lld\n", veryBig);
printf("Unsigned long long int: %llu\n", huge);
printf("Long double: %Lf\n", precise);

return 0;

}
