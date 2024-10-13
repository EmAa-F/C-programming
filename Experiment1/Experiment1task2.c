#include <stdio.h>

/*
Aim: Write a program to get students PCM marks from the user and find the average. Use conditional
operator to print if the student is eligible for admission. Eligibility criteria is 50% in
PCM.
Name       : Ansari Mohd Emaad Akhtar
UNI        : 241A019
Roll No    : 19
Div        : A1
Department : Artificial intelligence and data science 
*/

int main() { 
  // initialization of variable in the data type float
  //p= physics;c= chemistry;m= maths;PCM= avg of the p,c,m value
  float P,C,M,PCM;
  // talking input form the user
  printf("Please enter HSC marks\n");
  printf("Enter Physics marks\t   :")
  //input physics marks
  scanf("%f", &P);
  printf("Enter Chemistry marks      :");
  //input chemistry marks
  scanf("%f", &C);
  printf("Enter Maths marks\t   :");
  //input maths marks
  scanf("%f", &M);
  // calculation of the avg of the given marks
  PCM=(P+C+M)/3;
  //output of the calculated avg
  printf("The Avg of your PCM Marks:%f",PCM);
  //main logic using conditional oprators to print if the student is elegibel for college admisson or not
  (PCM>=50.0)?
    // will output if avg >= 50%
    printf("\nYou are Eligible for college admission\n"
     ):// will output when pcm<=50%
  printf("you are not eligible for college admission");
    return 0;
}
