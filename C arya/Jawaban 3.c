#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 1000000007

int bandingkan(const void *p, const void *q) {
    int a = *(const int *)p;
    int b = *(const int *)q;
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int *koin = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &koin[i]);
    }

    qsort(koin, n, sizeof(int), bandingkan);

   
    long long total = (long long) n * (n - 1) / 2;

    
    long long pasanganSama = 0;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && koin[j] == koin[i]) {
            j++;
        }
        long long banyak = j - i;              // ukuran kelompok nilai kembar
        pasanganSama += banyak * (banyak - 1) / 2;
        i = j;
    }

    long long jawaban = (total - pasanganSama) % MOD;
    printf("%lld\n", jawaban);

    free(koin);
    return 0;
}