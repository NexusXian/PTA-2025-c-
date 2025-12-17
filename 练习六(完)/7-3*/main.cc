#include <stdio.h>

int main (int argc, char *argv[]) {
  char arr[114];
  scanf("%s", arr);
  char* o_ptr = arr;
  char* p_ptr = arr;
  while (*o_ptr != '\0') {
    if (*o_ptr != 'a') {
      *p_ptr = *o_ptr;
      p_ptr++;
    }
    o_ptr++;
  }
  *p_ptr = '\0';
  printf("%s\n", arr);
  return 0;
}
