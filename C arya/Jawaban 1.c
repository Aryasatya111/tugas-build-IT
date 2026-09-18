#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        total += a;
    }

    printf("%lld\n", llabs(total));

    return 0;
}