#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "chart.h"

using doctest::Approx;

TEST_CASE( "test setup" ) {
  CHECK( getAnswer() == 42);
  CHECK( getGreeting() == "Hello, World");
}
