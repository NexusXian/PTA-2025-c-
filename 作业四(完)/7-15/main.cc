#include <stdio.h>

int main() {
  char c;
  scanf("%c", &c);
  getchar();
  char mes[88];
  fgets(mes, sizeof(mes), stdin);
  int index = -1;
  for (int i = 0; mes[i] != '\0'; i++) {
    if (mes[i] == c) {
      if (i > index) {
        index = i;
      }
    }
  }
  if (index != -1) {
    printf("index = %d", index);
  } else {
    printf("Not Found");
  }
  return 0;
}
