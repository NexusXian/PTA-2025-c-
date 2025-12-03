#include <stdio.h>
#include <string.h>

struct WordInfo {
  char word[11];
  int len;
  int index;
};

int main(int argc, char *argv[]) {

  struct WordInfo wi[20];
  int cnt = 0;
  while (1) {
    char word[11];
    scanf("%s", word);
    if (strcmp(word, "#") == 0) {
      break;
    }
    strcpy(wi[cnt].word, word);
    wi[cnt].len = strlen(word);
    wi[cnt].index = cnt;
    cnt++;
  }

  for (int i = 0; i < cnt; i++) {
    for (int j = 0; j < cnt - i - 1; j++) {
      if (wi[j].len > wi[j + 1].len ||
          (wi[j].len == wi[j + 1].len && wi[j].index > wi[j + 1].index)) {
        struct WordInfo temp = wi[j];
        wi[j] = wi[j + 1];
        wi[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < cnt; i++) {
    printf("%s ", wi[i].word);
  }
  return 0;
}
