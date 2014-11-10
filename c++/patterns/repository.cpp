#include <iostream>
#include <memory>

class Repository {
public:
  virtual void foo() = 0;
};

class Derived : public Repository {
public:
  virtual void do_foo() { std::cout << "Derived::foo()" << std::endl; }
};

class RepositoryHandle {
public:
  RepositoryHandle() : repository_(std::make_shared<Derived>()) {}
  std::shared_ptr<Repository> repository_;
};

class View {
public:
  View(std::shared_ptr<Repository> repository) : repository_(repository) {}
  std::shared_ptr<Repository> repoistory() { return repository_; }
  std::shared_ptr<Repository> repository_;
};

int main(int argc, char* argv[]) {
  std::cout << "Repository Pattern" << std::endl;
  Derived derived;
  derived.foo();
  View view(new RepositoryHandle());
  view.repository->foo();
}
