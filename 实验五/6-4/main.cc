int Count_Digit(const int N, const int D) {
  int n = N > 0 ? N : -N;
  if (n == 0) {
    if (D == 0) {
      return 1;
    } else {
      return 0;
    }
  }
  int cnt = 0;
  while (n > 0) {
    if (n % 10 == D) {
      cnt++;
    }
    n /= 10;
  }
  return cnt;
}
