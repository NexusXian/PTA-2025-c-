#include <stdio.h>
#include <string.h>

struct Person {
  char name[11];
  char birthday[9];
  char phone[18];
};

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  struct Person p[114514];
  for (int i = 0; i < n; i++) {
    struct Person person;
    scanf("%s %s %s", person.name, person.birthday, person.phone);
    p[i] = person;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      struct Person temp;
      if (strcmp(p[j].birthday, p[j + 1].birthday) > 0) {
        temp = p[j];
        p[j] = p[j + 1];
        p[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%s %s %s\n", p[i].name, p[i].birthday, p[i].phone);
  }

  return 0;
}
