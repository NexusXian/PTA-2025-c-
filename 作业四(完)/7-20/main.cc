#include <stdio.h>
int main() {
  char a[1000];
  gets(a);
  int count = 0; 
  int i = 0;
  int len = 0; 

  while (a[i] != '\0') {
    i++;
  }
  len = i;
  for (i = 0; i < len; i++) {
    if (a[i] != ' ' && a[i + 1] == ' ') {
      count++;
    }
    if (a[i] != ' ' && a[i + 1] == '\0') {
      count++;
    }
  }
  printf("%d", count);

  return 0;
}

