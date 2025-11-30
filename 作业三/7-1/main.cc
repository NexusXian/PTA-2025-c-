#include <stdio.h>


int main (int argc, char *argv[]) {
  
  int n;
  scanf("%d", &n);
  double ans = 0;
  double fz = 1;
  for (int i = 1; i <= n; i++) {
    ans += (fz / i);
  }
  printf("sum = %.6lf",ans);
  return 0;
}
