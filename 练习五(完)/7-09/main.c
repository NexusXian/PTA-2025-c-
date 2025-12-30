int narcissistic(int number) {
  int sum = 0;
  int len = 0;
  int o = number;
  while (number != 0) {
    number /= 10;
    len++;
  }
  int temp = o;
  while (temp != 0) {
    int temp2 = temp % 10;
    int temp3 = 1;
    for (int i = 0; i < len; i++) {
      temp3 *= temp2;
    }
    sum += temp3;
    temp /= 10;
  }

  return sum == o;
}
void PrintN(int m, int n) {
  for (int i = m + 1; i < n; i++) {
    if (narcissistic(i)) {
      printf("%d\n", i);
    }
  }
}
