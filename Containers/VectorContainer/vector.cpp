#include<vector>
#include<iostream>

auto main() -> int {
  std::cout << "Vector.cpp" << std::endl;

  //Vector Declaration
  std::vector<int> vect = {0, 1, 2};

  //Displaying the original elements of the vector
  std::cout << "Original: ";
  for (auto v : vect) std::cout << v << "  ";
  std::cout << std::endl;

  //Adding two new Data
  vect.push_back(3);
  vect.push_back(4);

  //Displaying the elements of the new vector
  //and reverse the order
  std::cout << "New data added" << '\n';
  for (auto v : vect) std::cout << v << '\n';
  std::cout << std::endl;

  //Modifying the content of the second and fourth element of the vector
  vect.at(2) = 5;
  vect.at(4) = 6;

  //Displaying the altered vector elements
  std::cout << "Manipulated data" ;
  for (auto v : vect) std::cout << v << '\n';
  std::cout << std::endl;

  return 0;
}
