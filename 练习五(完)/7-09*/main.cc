int narcissistic(int number) {
  int sum = 0;
  int temp = 0;
  int cnt = 0;
  int original = number;
  int temp2 = number;
  while (temp2 != 0) {
    cnt++;
    temp2 /= 10;
  }
  while (number != 0) {
    temp = number % 10;
    int temp3 = 1;
    for (int i = 0; i < cnt; i++) {
      temp3 *= temp;
    }
    sum += temp3;
    number /= 10;
  }
  if (sum == original) {
    return 1;
  }
  return 0;
}

void PrintN(int m, int n) {
  for (int i = m + 1; i < n; i++) {
    if (narcissistic(i)) {
      printf("%d\n", i);
    }
  }
}
