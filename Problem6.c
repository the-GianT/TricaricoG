#include <stdio.h>

// calculates the sum of the squares of the first x natural numbers
int sumOfSquares(int x)
{
  int i = 1;
  int retVal = 0;
  while (i <= x) {
    retVal += i * i;
    i++;
  }
  return retVal;
}

// calculates the square of the sum of the first x natural numbers
int squareOfSum(int x)
{
  int i = 1;
  int retVal = 0;
  while (i <= x) {
    retVal += i;
    i++;
  }
  retVal = retVal * retVal;
  return retVal;
}

int main()
{
  printf("The difference between the sum of the squares of the first ten natural numbers and the square of the sum is: %d\n", squareOfSum(10) - sumOfSquares(10));
  printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: %d\n", squareOfSum(100) - sumOfSquares(100));
  return 0;
}
