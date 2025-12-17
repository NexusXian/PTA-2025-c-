#include <stdio.h>
int main() {
  char message[88];
  fgets(message, sizeof(message), stdin);
  char c;
  scanf("%c", &c);
  int i = 0;
  int cnt = 0;
  while (message[i] != '\0') {
    if (message[i] == c) {
      cnt++;
    }
    i++;
  }
  printf("%d", cnt);
}
