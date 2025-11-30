int is(int number) {
  int ans = 0;
  while (number > 0) {
    ans += number % 10;
    number /= 10;
  }
  if (ans == 5) {
    return 1;
  } else {
    return 0;
  }
}

void count_sum(int a, int b) {
  int cnt = 0;
  int sum = 0;
  for (int i = a; i <= b; i++) {
    if (is(i)) {
      cnt++;
      sum += i;
    }
  }
  printf("count = %d, sum = %d\n", cnt, sum);
}
