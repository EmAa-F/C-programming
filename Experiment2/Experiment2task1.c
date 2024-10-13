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
// output the function of the code
printf("\t\t\t ***Even odd Finder*** \n\n\n");
//initialization of the variable in data type int(integer)
int number,remaider ;
printf("Enter the desired number: ");
//user input of the number desrired to be checked
scanf("%d",&number);
//cslculation of the remainder
remaider = number%2;
//main logic using conditional statement
if(remaider == 0){
    //will output if the the number is even
    printf("The entered number %d is even",number);
}
else{
    // will output if the number is odd
    printf("The entered number %d is odd",number);
}
return 0;
}
