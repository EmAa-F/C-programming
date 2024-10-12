/*
Aim:Write a program to find if entered number is
even or odd.
Name       : Ansari Mohd Emaad Akhtar
UNI        : 241A019
Roll No    : 19
Div        : A1
Department : Artificial intelligence and data science 
*/
#include<stdio.h>
int main(){
printf("\t\t\t ***Even odd Finder*** \n\n\n");

int number,remaider ;
printf("Enter the desired number: ");
scanf("%d",&number);
remaider = number%2;
if(remaider == 0){
    printf("The entered number %d is even",number);
}
else{printf("The entered number %d is odd",number);}}
