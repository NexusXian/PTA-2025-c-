#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  int arr[1000];
  int cnt[1000] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] == arr[j]) {
        cnt[i]++;
      }
    }
  }

  int MAX = 0;
  for (int i = 0; i < n; i++) {
    if (cnt[i] > cnt[MAX]) {
      MAX = i;
    }
  }
  printf("%d %d\n", arr[MAX], cnt[MAX]);

  return 0;
}
