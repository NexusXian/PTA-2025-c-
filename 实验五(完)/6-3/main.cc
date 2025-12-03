int reverse(int number) {
  if ( number < 0 ) {
    int x = -number;
    int ans = 0;
    while ( x > 0 ) {
      ans = ans * 10 + x % 10;
      x = x / 10;
    }
    return -ans;
  }else if ( number > 0 ) {
    int x = number;
    int ans = 0;
    while ( x > 0 ) {
      ans = ans * 10 + x % 10;
      x = x / 10;
    }
    return ans;
  }
  return 0;
}
