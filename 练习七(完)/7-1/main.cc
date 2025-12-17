#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
  double x1,y1,x2,y2;
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
  double dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  printf("distance = %.2lf\n",dis);


  return 0;
}
