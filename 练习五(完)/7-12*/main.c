double fn(double x, int n) {
  if (n == 1) {
    return x;
  }
  return x * (1 - fn(x, n - 1));
}
