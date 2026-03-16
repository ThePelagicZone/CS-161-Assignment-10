#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "chart.h"

using doctest::Approx;

TEST_CASE("findMax") {
  std::vector<double> sample1 = {12,6,4,9,20,16};
  CHECK(findMax(sample1) == 20);

  std::vector<double> sample2 = {2,6,4,9,20,16,25,12,14};
  CHECK(findMax(sample2) == 25);
}