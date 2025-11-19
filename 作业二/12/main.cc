#include <stdio.h>

int main(int argc, char *argv[]) {
  int x;
  scanf("%d", &x);
  int day = x % 5;
  if (day <= 3 && day > 0) {
    printf("Fishing in day %d\n", x);
  } else {

    printf("Drying in day %d\n", x);
  }
  return 0;
}
