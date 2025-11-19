#include <stdio.h>

int main (int argc, char *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);

  if (a == b && a != c) {
    printf("C\n");
  }else if (a == c && a != b) {
    printf("B\n");
  }else if (b == c && b != a) {
    printf("A\n");
  }

  return 0;
}
