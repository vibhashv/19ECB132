#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  
  temp = first;


  first = second;

  
  second = temp;

  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}
/*
output:
Linked list:  3  2  5  1  4 
After deleting an element:  2  5  1  4 
3 is not found
Sorted List:  1  2  4  5
*/