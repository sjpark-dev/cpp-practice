#include <stdio.h>

int n;

void f(int n) {
  if (n==0) printf("false\n");
  else printf("true\n");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
