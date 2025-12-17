#include <stdio.h>
#include <string.h>
struct Person {
  char name[114];
  double basic;
  double flow;
  double profit;
  double cost;
} p[114514];
int main(int argc, char *argv[]) {

  int n;
  scanf("%d", &n);


  char name[114];
  double basic;
  double flow;
  double profit;
  double cost;
  for (int i = 0; i < n; i++) {
    scanf("%s %lf %lf %lf", name, &basic, &flow, &cost);
    strcpy(p[i].name, name);
    p[i].cost = cost;
    p[i].basic = basic;
    p[i].flow = flow;
    p[i].profit = p[i].basic + p[i].flow - p[i].cost;
  }

  for (int i = 0; i < n; i++) {
    printf("%s %.2lf\n", p[i].name, p[i].profit);
  }

  return 0;
}
