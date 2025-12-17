#include <stdio.h>

struct Student {
  char uid[6];
  char name[20];
  int chinese;
  int math;
  int english;
  int total;
} s[114];

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s %s %d %d %d", s[i].uid, s[i].name, &s[i].chinese, &s[i].math,
          &s[i].english);
    s[i].total = s[i].chinese + s[i].math + s[i].english;
  }

  struct Student MAX = s[0];
  for (int i = 1; i < n; i++) {
    if (s[i].total > MAX.total) {
      MAX = s[i];
    }
  }
  printf("%s %s %d\n", MAX.name, MAX.uid, MAX.total);

  return 0;
}
