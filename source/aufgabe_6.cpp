#define CATCH_CONFIG_RUNNER

#include <set>
#include "circle.hpp"
#include <iostream>
#include <algorithm>

// Include von File aus einer Fremdbibliothek
# include <catch.hpp>

int main() {
  std::vector<Circle> container{};
  container.push_back(Circle(Vec2{double(100), 100}, 40, Color{50,10,150}));
  container.push_back(Circle(Vec2{double(100), 100}, 111, Color{50,10,150}));
  container.push_back(Circle(Vec2{double(100), 100}, 64, Color{50,10,150}));
  container.push_back(Circle(Vec2{double(100), 100}, 5, Color{50,100,150}));
  container.push_back(Circle(Vec2{double(100), 100}, 12, Color{50,100,150}));
  std::sort(container.begin(), container.end());
  //exercise 3.7
  /*
  std::sort(container.begin(), container.end(), [] (Circle& lhs, Circle& rhs) -> bool{return lhs < rhs;});
  */
  std::cout << container[0] << container[1];
  //REQUIRE(std::is_sorted(container.begin(), container.end()));
  std::cout << std::is_sorted(container.begin(), container.end());
  return 0;
}