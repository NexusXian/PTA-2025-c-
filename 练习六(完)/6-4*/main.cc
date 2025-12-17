#include <string.h>
void strmcpy(char *t, int m, char *s) {
  int len = strlen(t);
  int k = 0;
  if (len < m) {
    *s = '\0';
  }else if (len >= m) {
    for (int i = m - 1 ; i < len;i++) {
      s[k++] = t[i];
    }
    s[k] = '\0';
  }
}
