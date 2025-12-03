#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int h = n / 100;
    int t = (n / 10) % 10;
    int o = n % 10;

    int ata = o * 100 + t * 10 + h;
    printf("%d\n",ata);
    return 0;
}
