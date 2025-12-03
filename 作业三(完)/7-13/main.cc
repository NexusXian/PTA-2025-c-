#include <stdio.h>

int main (int argc, char *argv[]) {
  
  int n,u,d;
  scanf("%d %d %d",&n,&u,&d);
  int h = 0;
  
  int time = 0;
  while (1) {
    h += u;
    time++;
    if ( h >= n) {
      break;
    }
    h -= d;
    time++;
  }
  printf("%d\n",time);
  return 0;
}
