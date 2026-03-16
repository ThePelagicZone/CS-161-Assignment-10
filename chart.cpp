#include "chart.h"

#include <algorithm>

using namespace std;

double findMax(const vector<double>& data) {
  //Protection from empty data
  if (data.empty()) {
    return 0;
  }

  //Learning how to use the auto type identifier as well as the max_element call
  auto V_max = max_element(data.begin() , data.end());

  //Also learning how to use * with the max_element call to ensure there is a value. 
  return *V_max;
}