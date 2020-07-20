#include <iostream>
#include <functional>
#include <chrono>

int main()
{
  auto begin = std::chrono::high_resolution_clock::now();
  [out = std::ref(std::cout << "Hello ")](){ out.get() << "World\n";}();

  for (int i = 0; i < 1e5; i++)
  {
    /* code */
    std::cout << i << std::endl;
  }
  


  auto end = std::chrono::high_resolution_clock::now();

  double duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end-begin).count();

  std::cout << "Time Elapsed : " << duration << " nanoseconds" << std::endl;

}
