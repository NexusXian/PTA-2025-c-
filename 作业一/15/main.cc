#include <stdio.h>
int main() {
    double x,y;
    scanf("%lf %lf",&x,&y);
    double ans = x *(y / 10);
    printf("%.2lf",ans);
    return 0;
}
