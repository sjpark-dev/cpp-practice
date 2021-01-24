#include <stdio.h>

int mymin(int x, int y) {
  return x < y ? x : y;
}

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}
