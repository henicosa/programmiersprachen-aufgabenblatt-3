#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>

bool is_multiple_of_3(int i)
{
  if (i % 3 == 0) {
    return true;
  } else {
    return false;
  }
}

TEST_CASE ( " filter alle vielfache von drei " , " [ erase ] " )
{
  std::vector<unsigned int> v(100);

  for (auto & v : v) {
    v = std::rand() % 101;
  }

  v.erase( std::remove_if(v.begin(), v.end(), 
  [] (int i) -> bool{return !is_multiple_of_3(i);}), v.end());

  REQUIRE(std::all_of( v.begin() , v.end(), is_multiple_of_3));
}
int main (int argc , char* argv[])
{
  return Catch::Session().run( argc, argv );
}