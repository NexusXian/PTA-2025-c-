#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {

  char arr[114];
  strcpy(arr, "\0");
  for (int i = 0; i < 5; i++) {
    char c[114];
    scanf("%s", c);
    if (strcmp(c, arr) > 0) {
      strcpy(arr, c);
    }
  }
  printf("Max is: %s\n", arr);
  return 0;
}
