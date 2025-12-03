#include <stdio.h>
int main(int argc, char *argv[]) {
  int year;
  scanf("%d", &year);
  if (year < 2001 || year > 2100) {
    printf("Invalid year!\n");
    return 0;
  }
  int cnt = 0;
  for (int i = 2000; i <= year; i++) {
    if ((i % 4 == 0 && i % 100 != 0) || (year % 400 == 0)) {
      cnt++;
      printf("%d\n", i);
    }
  }
  if (cnt == 0) {
    printf("None\n");
    return 0;
  }

  return 0;
}
