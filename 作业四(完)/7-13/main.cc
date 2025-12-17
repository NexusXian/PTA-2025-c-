#include <stdio.h>

void solve() {
  int n;
  scanf("%d", &n);
  int flag = 1;
  int arr[100][100];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[i][j] != 0) {
        flag = 0;
        break;
      }
    }
  }
  if (flag) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}
