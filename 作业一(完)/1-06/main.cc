#include <stdio.h>

int main() {
    int m = 87;
    int e = 72;
    int c = 93;
    int a = (int)((m  + e + c) / 3.0);
    printf("math = %d, eng = %d, comp = %d, average = %d",m,e,c,a);
    return 0;
}
