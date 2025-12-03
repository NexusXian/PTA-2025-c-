#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int x = 1; x <= 12; x++) {
        int y = 50 - 4 * x;
        int z = 50 + 3 * x;

        if (y >= 1 && z >= 1) {
            printf("%d %d %d", x, y, z);
            count++;
            if (count == n) break;
            printf("\n");
        }
    }
    return 0;
}

