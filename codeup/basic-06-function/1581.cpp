#include <stdio.h>

void myswap(int *x, int *y) {
  if (*x>*y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
  }
}

main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
