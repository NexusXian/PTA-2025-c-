#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = 1; i < 9999; i++) {
    if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10) {
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
