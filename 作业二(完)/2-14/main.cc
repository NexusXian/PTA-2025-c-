#include <stdio.h>

int main (int argc, char *argv[]) {
  int x;
  scanf("%d", &x);
  if (x > 60) {
    printf("Speed: %d - Speeding\n",x);
  }else if (x <= 60) {
    printf("Speed: %d - OK\n",x);
  }
  return 0;
}
