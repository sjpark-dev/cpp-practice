#include <cstdio>

int n, d[110];

int f() {
    int i, idx = 0;
    for (i=1; i<n; i++) {
        if (d[i]>d[idx]) idx = i;
    }
    return idx + 1;
}

int main() {
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &d[i]);
    }

    printf("%d", f());
    return 0;
}
