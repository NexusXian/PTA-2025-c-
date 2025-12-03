#include <stdio.h>
#include <math.h>

//指数筛选函数
int func(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2 ; i <= (int)sqrt(n);i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main (int argc, char *argv[]) {
  int m,n;
  scanf("%d%d",&m,&n);

  //和
  int ans = 0;

  //计数器
  int cnt = 0;

  for (int i = m ; i <= n ;i++) {
    if (func(i) == 1) {
      ans += i;
      cnt++;
    }
  }
  printf("%d %d\n",cnt,ans);


  return 0;
}
