// Program to calculate the sum of array elements by passing to a function 

#include <stdio.h>
int calculateSum(int num[]);

int main() {
  int Arrsum, num[] = {23, 55, 22, 3, 40, 18};

  // num array is passed to calculateSum()
  Arrsum = calculateSum(num); 
  printf("Sum of array elements = %d", Arrsum);
  return 0;
}

int calculateSum(int num[]) {
  int sum = 0;

  for (int i = 0; i < 6; ++i) {
    sum += num[i];
  }

  return sum;
}
