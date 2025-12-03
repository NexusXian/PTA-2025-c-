#include <stdio.h>

int main (int argc, char *argv[]) {
  int a,b;
  scanf("%d %d", &a, &b);
  int temp = a;
  a = b;
  b = temp;
  printf("a=%d,b=%d\n",a,b);
  return 0;
}
