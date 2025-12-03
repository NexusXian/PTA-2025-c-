#include <stdio.h>

int main (int argc, char *argv[]) {
  int x,y;
  char s;
  scanf("%d %c %d",&x,&s,&y);
  if (s=='+') {
    printf("%d\n",x+y);
  }else if (s=='-') {
    printf("%d\n",x-y);
  }else if (s=='*') {
    printf("%d\n",x*y);
  }else if (s=='/') {
    printf("%d\n",x/y);
  }else if (s=='%') {
    printf("%d\n",x%y);
  }else {
    printf("ERROR\n");
  }
  return 0;
}
