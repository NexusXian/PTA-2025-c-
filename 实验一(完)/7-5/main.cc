#include <stdio.h>

double round2(double x) {
  return (int)(x * 100 + 0.5) / 100.0;
}


int main(int argc, char *argv[])
{
  double a,b;
  scanf("%lf %lf",&a,&b);
  double x = a * (b /100);
  double t = a + x;
      x = round2(x);
    t = round2(t);
  printf("本金: %10.2lf元\n",a);
  printf("利息: %10.2lf元\n",x);
  printf("合计: %10.2lf元\n",t);
  return 0;
}

