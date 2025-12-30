#include <stdio.h>

int main(int argc, char *argv[]) {
  char arr[1000];
  fgets(arr,1000,stdin);
  int n = 0;
  while (arr[n] != '\0') {
    n++;
  }
  if (n > 0 && arr[n - 1] == '\n') {
    arr[n - 1] = '\0';
    n--;
  }
  int cnt = 0;
  for (int i = 0;i < n ; i++) {
    if (arr[i] != ' ' && arr[i + 1] == '\0') {
      cnt++;
    }
    if (arr[i] != ' ' && arr[i + 1] == ' ') {
      cnt++;
    }
  }
  printf("%d\n", cnt);

  return 0;
}
