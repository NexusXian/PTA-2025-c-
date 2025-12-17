// 核心思想：辗转相除法
int gcd(int x, int y) {
  while (y != 0) {
    int r = x % y;
    x = y;
    y = r;
  }
  return x;
}
