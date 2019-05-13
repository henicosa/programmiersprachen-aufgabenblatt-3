#include <random>
#include <list>
#include <iostream>
#include <array>
#include <map>

int main() {
  // Exercise 3.2
  std::list<unsigned int> random_list;
  for(int i = 0; i < 100; i++) {
    random_list.push_front(std::rand() % 101);
  }
  // Exercise 3.3
  // with map
  std::map<int,int> frequencies_map;
  for(auto element : random_list) {
    frequencies_map[element]++;
  }  
  for(int i = 0; i < 101; i++) {
    std::map<int, int>::iterator it = frequencies_map.find(i);
    if (it != frequencies_map.end()) {
      //std::cout << i << " : " << (*it).second << "\n";
      std::cout << i << " : " << it->second << "\n";
    } else {
      std::cout << i << " : " << 0 << "\n";
    }
  }
  // with list
  /*std::array<int, 101> frequencies;
  for(int i = 0; i < 101; i++) {
    frequencies[i] = 0;
  }
  for(int i = 0; i < 100; i++) {
    frequencies[random_list.front()]++;
    random_list.pop_front();
  }
  for(int i = 0; i < 101; i++) {
    std::cout << i << " : " << frequencies[i] << "\n";
  }*/
  return 0;
}