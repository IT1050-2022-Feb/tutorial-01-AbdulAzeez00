/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int num01, int num02);
int multiply(int num01, int num02);
int maximum(int num01, int num02);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int maximum(int num01,int num02){
  if (num01>num02){
    return num01;
  }
  else{
    return num02;
  }
}

int minimum(int num01,int num02){
  if (num01>num02){
    return num02;
  }
  else{
    return num01;
      
  }
}

int multiply(int num01,int num02){
  return num01*num02;  
}