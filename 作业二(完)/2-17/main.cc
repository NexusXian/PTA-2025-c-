#include <stdio.h>

#include <math.h>

int main(int argc, char *argv[]) {
  int x;
  scanf("%d", &x);
  if (x < 100 || x > 999) {
    printf("Invalid Value\n");
    return 0;
  }


  int a = x / 100;
  int b = x / 10 % 10;
  int c = x % 10;
  if (pow(a, 3) + pow(b, 3) + pow(c, 3) == x) {
    printf("Yes\n");
  }else {
    printf("No\n");
  }
  return 0;
}
