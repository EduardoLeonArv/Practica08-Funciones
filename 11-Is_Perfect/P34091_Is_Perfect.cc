/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file P34091_Is_Perfect.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program print if a number is perfect.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34091
  */

#include <iostream>
#include <cmath>

/**
 * @brief Check if the imputed number is perfect
 * @param divisors Divisors of the imputed number
 * @param number Imputed number to check
*/
bool is_perfect(int number) {
  int divisors{1};
  for (int iteration{2}; sqrt(number) >= iteration; iteration++) {
    if (number % iteration == 0) {
      divisors = divisors + iteration + (number / iteration);
    }
  }
  bool is_perfect;
  if ((divisors == number) && (number != 0) && (number != 1)) {
    is_perfect = true;
  }
  else {
    is_perfect = false;
  }
  return is_perfect;
}

/**
 * @brief main function.
*/
int main() {
  int number;
  std::cin >> number;
  std::cout << is_perfect(number) << std::endl;
}