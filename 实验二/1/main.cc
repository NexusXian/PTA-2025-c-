#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lf", &x);
    
    if (x > 6) {
        y = (5.0 / 27) * (x * x + 4 * x - 6);
    } else if (x > 0 && x <= 6) {
        y = log(16) / log(3) + x;
    } else { 
        y = (23.0 / 7) * fabs(pow(x, 3) + 4);
    }
    
    printf("%.3f\n", y);
    return 0;
}

