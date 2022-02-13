/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int count,a,sum=0;
  printf("input number of terms: ");
  scanf("%d",&count);

  printf("sum = ");

  for(a=1;a<=count;a++)
  {
    printf("%d",a);
    sum=sum+a;
    printf("+");
  }
  printf("= %d",sum);
  return 0;
}

