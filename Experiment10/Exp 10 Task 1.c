#include <stdio.h>
int main() {
int numl, num2, sum;
int *ptrl, *ptr2;
printf("\t\t *** Addition using Pointers *** \n\n");
printf("Enter first number: ");
scanf("%d", &numl);
printf("Enter second number: ");
scanf("%d", &num2);
ptrl=&numl;
ptr2=&num2;
sum = *ptrl + *ptr2; /* star(*) collects data of num1 and adds with address of num2*/
printf("Sum of %d and %d is: %d\n", numl, num2, sum);
return 0;
}
