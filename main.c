#include <stdio.h>

int main() 
{
  int p, r, t, interest, total;
  printf("Enter the principal amount:");
  scanf("%d", &p);
  printf("Enter the rate of interest:");
  scanf("%d", &r);
  printf("Enter the time period:");
  scanf("%d", &t);
  interest = p * r * t/100;
  printf("Interest earned %d", interest);
  total = p + interest;
  printf("Total money earned %d", total);
  
  return 0;
}
