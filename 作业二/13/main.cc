#include <stdio.h>
int main (int argc, char *argv[]) {
  int x,y;
  char c;
  scanf("%d %d %c",&x,&y,&c);
  double ans = 0;

  if (y == 90) {
    ans = (double)(6.95*x);
  } else if (y == 93) {
    ans = (double)(7.44*x);
  }else if (y == 97) {
    ans = (double)(7.93*x);
  }

  if (c == 'm') {
    ans = ans * (1 - 0.05);
  } else if (c == 'e') {
    ans = ans * (1 - 0.03);
  }
  printf("%.2f\n",ans);


  return 0;
}

