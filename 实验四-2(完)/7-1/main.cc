#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  
  char str[21];
  scanf("%s", str);
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      str[i] = '$';
    }
  }

  printf("%s\n", str);

  return 0;
}
