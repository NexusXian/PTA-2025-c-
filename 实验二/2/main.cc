#include <stdio.h>

int main(int argc, char *argv[]) {
  char x;
  scanf("%c", &x);
  if (x >= '0' && x <= '9') {
    printf("digit\n");
  } else if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
    printf("character\n");
  } else {
    printf("ERROR\n");
  }
  return 0;
}
