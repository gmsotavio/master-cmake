#include <iostream>

float addition(float, float);
float division(float, float);
void print_result(std::string, float);

int main() {
  float first_no, second_no, result_add, result_div;
  std::cout << "Enter the first number\t";
  std::cin >> first_no;
  std::cout << "Enter the second number\t";
  std::cin >> second_no;

  result_add = addition(first_no, second_no);
  result_div = division(first_no, second_no);

  print_result("Addition", result_add);
  print_result("Division", result_div);

  return 0;
}
