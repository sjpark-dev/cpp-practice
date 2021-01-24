#include <stdio.h>

char a[101], b[101];

char *mysubstr(char *str, int start, int count) {
    int i, j;
    for (i=start, j=0; i<start+count; i++, j++) {
      b[j] = a[i];
    }
    b[j] = '\0';
    return b;
}

main()
{
    int b, c;
    scanf("%s %d %d ", &a, &b, &c);
    printf("%s", mysubstr(a, b, c));
}
