// Chris Huynh
// chrishuynh34@csu.fullerton.edu
// @chroyy
// Partners: @Backwhenwewerekids

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() == 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  bool first = true;
  double sum{};
  for (std::string& iiii : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(iiii);
  }

  double average{sum / (static_cast<int>(arguments.size()) - 1)};

  std::cout << "average = " << average << "\n";
  return 0;
}
