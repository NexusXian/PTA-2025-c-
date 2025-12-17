#include <stdio.h>
int main() {
  int n, m, a[30], b[30], c[60];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    scanf("%d", &b[i]);
  }
  // 遍历a[20]数组，找出与b数组中不同的元素
  int k = 0, flag = 1; // flag用来判断是否有相同的元素
  for (int i = 0; i < n; i++) {
    flag = 1;
    for (int j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
      c[k++] = a[i];
  }
  // 遍历b[]数组，找出与a[]找出与b数组中不同的元素
  for (int i = 0; i < m; i++) {
    flag = 1;
    for (int j = 0; j < n; j++) {
      if (b[i] == a[j]) {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
      c[k++] = b[i];
  }
  // 找出c[]中相同的元素
  for (int i = 0; i < k; i++) {
    for (int j = i + 1; j < k; j++) {
      if (c[i] == c[j]) {
        for (int l = j; l < k - 1; l++) {
          c[l] = c[l + 1];
        }
        k--;
      }
    }
  }
  for (int i = 0; i < k; i++) {
    if (i != 0)
      printf(" ");
    printf("%d", c[i]);
  }
  return 0;
}
