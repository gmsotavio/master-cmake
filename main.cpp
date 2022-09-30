#include <iostream>

float addition(float num1, float num2) { return num1 + num2; }

float division(float num1, float num2) { return num1 / num2; }

void print_result(std::string result_type, float result_value) {
  std::cout << result_type << " result:\t" << result_value << "\n";
}

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
