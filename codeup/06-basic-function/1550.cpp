#include <stdio.h>

long long int n;

long long int sqrt(long long int x) {
  long long int i;
  while (i*i<=x) {
    i++;
  }
  return i - 1;
}

int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
