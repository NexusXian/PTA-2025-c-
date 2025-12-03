int Factorial(const int N) {
  int n = N;
  if (n < 0) {
    return 0;
  }
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}
