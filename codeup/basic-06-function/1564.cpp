#include <stdio.h>

int a, b;

int gcd(int x, int y) {
  int i, mx = 1;
  for (i=1; i<=x; i++) {
    if (x%i==0 && y%i==0 && i>mx) mx = i;
  }
  return mx;
}

int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
