double mypow(double x, int n) {
  double y = 1;
  for (int i = 0; i < n; i++) {
    y = y * x;
  }
  return y;
}
