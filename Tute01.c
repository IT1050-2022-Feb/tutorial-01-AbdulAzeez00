/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int subject01,subject02;
  float avg;
  
  printf("Enter mark subject 01: ");
  scanf("%d",&subject01);
  printf("Enter mark subject 02: ");
  scanf("%d",&subject02);

  avg=(subject01+subject02)/2.0;

  printf("Average = %.2f",avg);
  
  return 0;
}

