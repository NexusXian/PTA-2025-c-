#include <stdio.h>

int main() {
  int A, B;
  scanf("%d %d", &A, &B);

  int sum = 0;
  int count = 0; // 记录当前行已输出的数字个数

  for (int i = A; i <= B; i++) {
    sum += i;
    printf("%5d", i); // 每个数字占5个字符宽度，右对齐
    count++;

    // 每5个数字换行，或最后一行不足5个时不额外换行
    if (count % 5 == 0 || i == B) {
      printf("\n");
    }
  }

  printf("Sum = %d\n", sum);
  return 0;
}
