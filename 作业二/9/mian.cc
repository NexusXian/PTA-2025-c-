#include <stdio.h>
int main (int argc, char *argv[]) {
  
  int x;
  scanf("%d", &x);
  if (x >= 90) {
    printf("A\n");
  }else if (x >= 80) {
    printf("B\n");
  }else if (x >= 70) {
    printf("C\n");
  }else if (x >= 60) {
    printf("D\n");
  }else {
    printf("E\n");
  }

  return 0;
}
