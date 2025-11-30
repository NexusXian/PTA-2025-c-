#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int ans = 0;
  int a, b;
  scanf("%d %d", &a, &b);
  int temp = a;
  for (int i = 0; i <= abs(b) + abs(a); i++) {
    ans += temp;
    temp++;
  }

  int k = abs(b) + abs(a);

  while (1) {
    if (k >= 5) {
      for (int i = 0; i < 5; i++) {
        printf("%5d ", a);
        a++;
      }
      k -= 5;
    } else if (k < 5) {
      for (int i = 0; i <= k; i++) {
        printf("%5d ", a);
        a++;
      }
      break;
    }
    printf("\n");
  }

  printf("\n");
  printf("Sum = %d", ans);
  return 0;
}
