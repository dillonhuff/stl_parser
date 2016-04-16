#include <cassert>
#include <iostream>

#include "parse_stl.h"

int main(int argc, char* argv[]) {
  assert(argc == 2);
  auto info = stl::parse_stl(argv[1]);
  std::vector<stl::triangle> triangles = info.triangles;
  std::cout << "STL HEADER = " << info.name << std::endl;
  std::cout << "# triangles = " << triangles.size() << std::endl;
  for (auto t : info.triangles) {
    std::cout << t << std::endl;
  }

}
