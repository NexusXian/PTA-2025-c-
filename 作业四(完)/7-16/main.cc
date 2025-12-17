#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {

  char arr[100];
  fgets(arr, 100, stdin);
  int len = strlen(arr);
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        char temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < len; i++) {
    if (arr[i] != arr[i + 1]) {
      printf("%c", arr[i]);
    }
  }
  return 0;
}
