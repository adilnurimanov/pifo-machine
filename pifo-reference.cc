#include <queue>
#include <iostream>

template<typename T>
void print_queue(T & q) {
  while(! q.empty()) {
    std::cout << q.top() << " ";
    q.pop();
  }
  std::cout << '\n';
}

int main() {
  std::priority_queue<int> q;

  for(const auto & n : {1,8,5,6,3,4,0,9,3,2})
    q.push(n);

  print_queue(q);
}
