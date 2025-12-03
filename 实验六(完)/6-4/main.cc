char *search( char *s, char *t ) {
  //如果是空字符串，直接返回
  if (*s == '\0') {
    return s;
  }
  while (*s != '\0') {
    //如果字符串中的字符和查找字符串中的字符相等，则返回
    char* s_ptr = s;
    char* t_ptr = t;
    while (*s_ptr != 0 && *t_ptr != 0 && *s_ptr == *t_ptr) {
      s_ptr++;
      t_ptr++;
    }
    //如果查找字符串中的字符为空，则返回
    if (*t_ptr == '\0') {
      return s;
    }
    //继续查找下一个字符
    s++;
  }
  return NULL;
}
