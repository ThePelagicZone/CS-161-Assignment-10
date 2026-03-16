#include "chart.h"

#include <algorithm>

using namespace std;

double findMax(const vector<double>& data) {
  //Protection from empty data
  if (data.empty()) {
    return 0;
  }

  auto V_max = max_element(data.begin() , data.end());

  return *V_max;
}