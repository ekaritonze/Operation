#include <stdio.h>
#include <stdlib.h>g

int main(int argc, char *argv[])
{
  int sum = 0, difference =0, product = 0, division = 0;
  int number1 = 0, number2 = 0;
  char name;

  printf("Enter your name : ");
  scanf("%c", &name);
  
  
  // Enter 2 numbers :
  
  printf("Enter the first number : ");
  scanf("%d", &number1);
  printf("Enter  the second number : ");
  scanf("%d", &number2);
  
  // the operation code :
  
  sum = number1 + number2;
  difference = number1 - number2;
  product = number1 * number2;
  division = number1 / number2;
  
  
  // print result :
  
  printf("%c\n", name);
  printf ("%d + %d = %d\n", number1, number2, sum);
  printf ("%d - %d = %d\n", number1, number2, difference);
  printf ("%d * %d = %d\n", number1, number2, product);
  printf ("%d / %d = %d\n", number1, number2, division);
       
  return 0;
}