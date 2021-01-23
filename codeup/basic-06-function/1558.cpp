#include <stdio.h>

long long int n;

long long int f(long long int x) {
  long long int sum = 0;
  while (x>0) {
    sum = sum * 10 + (x%10);
    x /= 10;
  }
  return sum;
}

int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
