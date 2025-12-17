#include <stdio.h>

#include <string.h>
void changeCase (char *c) {
  if (*c >= 'a' && *c <= 'z') {
    *c = *c - 32;
  } else if (*c >= 'A' && *c <= 'Z') {
    *c = *c + 32;
  }
}


int main (int argc, char *argv[]) {
  
  char arr[100];
  fgets(arr, 100, stdin);
  for (int i = 0; arr[i]!='#'; i++) {
    changeCase(&arr[i]);
  }
  for (int i = 0; arr[i]!='#'; i++) {
    printf("%c", arr[i]);
  }
  return 0;
}
