#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

   
    int arr[3] = {a, b, c};
    if (arr[0] > arr[1]) { int t = arr[0]; arr[0] = arr[1]; arr[1] = t; }
    if (arr[1] > arr[2]) { int t = arr[1]; arr[1] = arr[2]; arr[2] = t; }
    if (arr[0] > arr[1]) { int t = arr[0]; arr[0] = arr[1]; arr[1] = t; }

    int x = arr[0], y = arr[1], z = arr[2];

    if (x == y || y == z) {
       
        printf("%d\n", 0);
    } else {
        int keMin = y - x;   // jarak pemain minimum menuju nilai tengah
        int keMax = z - y;   // jarak pemain maksimum menuju nilai tengah
        int jawaban = (keMin < keMax) ? keMin : keMax;
        printf("%d\n", jawaban);
    }

    return 0;
}