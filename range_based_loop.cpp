#include<iostream>

auto main() -> int {
  //Declaring an array elements
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  //Displaying the array elements
  //using non-member begin() and end()
  std::cout << "Displaying array element using range-based for loop"<<std::endl;
  for (auto a : arr) std::cout << a << " ";
  std::cout<<std::endl;

  return 0;
}
