#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  double area;
  double perimeter;
  if (a + b > c && a + c > b && b + c > a) {
    double p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    perimeter = a + b + c;
    printf("area = %.2lf; perimeter = %.2lf",area,perimeter);
  } else {
    printf("These sides do not correspond to a valid triangle");
  }


  return 0;
}

