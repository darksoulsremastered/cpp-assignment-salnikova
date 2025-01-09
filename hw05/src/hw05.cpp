#include <hw05.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>

std::string to_lower(std::string str) {
  str.erase(remove_if(str.begin(), str.end(), [](char c) { return !isalpha(c); }), str.end());
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  return str;
}

std::vector<std::string> hw05(const std::vector<std::string>& strings)
{
  std::vector<std::string> new_strings;
  std::copy_if(strings.begin(), strings.end(), std::inserter(new_strings, new_strings.end()), [](std::string str) -> bool {return to_lower(str) == to_lower(std::string(str.rbegin(), str.rend()));});
  return new_strings;
}