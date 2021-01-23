#include <stdio.h>

int n;

int f(int x) {
  int i, cnt = 0;
  for (i=1; i<=x; i++) {
    if (x%i == 0) cnt++;
  }
  return cnt;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
