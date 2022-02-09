/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  //creating variable
  int mark1;
  int mark2;
  float average;

  //getting keyborad input
  printf ("Enter the marks of subject 1 : ");
  scanf ("%d",&mark1);

  printf ("Enter the marks of subject 2 : ");
  scanf ("%d",&mark2);

  //Calculate average
  average = (mark1 + mark2)/2.0;

  //print average
  printf ("Average marks of the two subject : %.2f",average);

  return 0;
}

