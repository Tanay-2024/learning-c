// Write a program which does the following

// Create a calculator
// Declare 2 integer variables a and b
// Initialize the variables a and b based on two user inputs
// Declare an integer variable sum - and store the value of addition of a and b
// Declare an integer variable diff - and store the value of subtraction of a and b
// Output sum and diff to the console on separate lines
// Sample 1:
// Input
// Output
// 35
// 23
// Sum is: 58
// Difference is: 12

#include <stdio.h>

int main() {

  int a = 35, b = 23;
  int sum;
  int diff;
  scanf("%d", &a);
  scanf("%d", &b);
   printf("Sum is: %d\n", a+b);
   printf("Difference is: %d", a-b);
   return 0;
  
  
}


