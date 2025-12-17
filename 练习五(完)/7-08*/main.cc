int prime(int p) {
  if (p < 2) {
    return 0;
  }
  for (int i = 2; i <= (int)sqrt(p); i++) {
    if (p % i == 0) {
      return 0;
    }
  }
  return 1;
}

void Goldbach(int n) {
  for (int i = 2; i <= n; i++) {
    if (prime(i) && prime(n - i)) {
      printf("%d=%d+%d", n, i, n - i);
      break;
    }
  }
}
