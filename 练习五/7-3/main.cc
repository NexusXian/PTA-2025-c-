double mypow(double x, int n) {
  if (n == 0) {
    return 1;
  }
  if (n == 1) {
    return x;
  }

  for (int i = 2; i <= n; i++) {
    x *= x;
  }
  return x;
}
