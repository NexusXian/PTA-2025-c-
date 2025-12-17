#include <stdio.h>

struct Student {
  char uid[6];
  char name[11];
  double grade;
} p[114514];

int main() {
  double total = 0;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s %s %lf", p[i].uid, p[i].name, &p[i].grade);
    total += p[i].grade;
  }
  double average = (double)(total / n);

  printf("%.2lf\n", average);
  for (int i = 0; i < n; i++) {
    if (p[i].grade < average) {
      printf("%s %s\n", p[i].name, p[i].uid);
    }
  }

  return 0;
}
