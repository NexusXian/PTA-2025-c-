#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
  std::string s1;
  std::getline(std::cin,s1); 
  std::string s2 = s1;
  reverse(s2.begin(), s2.end());
  if (s1 == s2) {
    std::cout << s1 << std::endl;
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << s1 << std::endl;
    std::cout << "No" << std::endl;
  }
  return 0;
}
