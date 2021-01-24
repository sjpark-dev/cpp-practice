#include <stdio.h>

int a, n;

long long int pow(int x, int y) {
  if (x==1) return 1;
  int i;
  long long int m = 1;
  for (i=0; i<y; i++) {
    m *= x;
  }
  return m;
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}
