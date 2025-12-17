void dectobin(int n) {
  int y, x = 1;
  int sum = 0;
  while (n != 0) {
    y = n % 2;
    sum += x * y;
    x *= 10;
    n /= 2;
  }
  printf("%d\n", sum);
}
