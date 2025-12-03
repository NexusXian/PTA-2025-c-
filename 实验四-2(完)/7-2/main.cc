#include <stdio.h>

int main (int argc, char *argv[]) {
  
  char str[21];
  scanf("%20s", str);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n && str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  return 0;
}
