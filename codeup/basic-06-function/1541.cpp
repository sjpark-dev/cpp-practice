#include <stdio.h>

int n;

void f(int) {
  if (n<0) printf("negative\n");
  else if (n==0) printf("zero\n");
  else printf("positive");
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
