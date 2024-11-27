#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  int theFirst = values.first;
  values.first = values.second;
  values.second = theFirst;
  return values;
}