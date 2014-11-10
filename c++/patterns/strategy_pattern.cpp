#include <iostream>

class Strategy {
public:
  void execute() = 0;
};

class StrategyA : public Strategy {
public:
  void execute() { std::cout << "StrategyA::execute()" << std::endl; }
};

class StrategyB : public Strategy {
public:
  void execute() { std::cout << "StrategyB::execute()" << std::endl; }
};

int main(int argc, char* argv[]) {
  std::cout << "Strategy Pattern" << std::endl;
}
