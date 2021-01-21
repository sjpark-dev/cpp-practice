#include <stdio.h>

int n;

char grade (int n) {
  if (n>=90) return 'A';
  if (n>=80) return 'B';
  if (n>=70) return 'C';
  if (n>=60) return 'D';
  return 'F';
}

int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
