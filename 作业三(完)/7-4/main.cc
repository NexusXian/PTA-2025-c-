#include <stdio.h>

int main (int argc, char *argv[]) {
  int a,n;
  scanf("%d%d",&a,&n);
  int ans = 0;
  int temp = a;
  for (int i = 0 ; i < n ;i++) {
    ans += temp;
    temp = temp * 10;
    temp = temp + a;
  }
  printf("s = %d",ans);
  return 0;
}
