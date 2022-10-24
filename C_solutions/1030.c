#include <stdio.h>

int josephus(int n, int k) {
    if (n == 1) return 1;
    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main() {
    unsigned int k, n;
    int c, q;

    scanf("%d",&q);
    c = 0;
    while (++c <= q) {
        scanf("%d%d",&n,&k);
        printf("Case %d: %d\n",c, josephus(n, k));
    }

    return 0;
}