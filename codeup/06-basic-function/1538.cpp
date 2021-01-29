#include <stdio.h>

int n;

void f(int x) {
  printf("%s\n", x%2==0 ? "even" : "odd");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
