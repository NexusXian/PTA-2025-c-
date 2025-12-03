#include <stdio.h>

int main() {
    int h;
    scanf("%d",&h);
    double w = (h - 100) * 0.9;
    double W = w * 2;
    printf("%.1lf",W);
    return 0;
}
