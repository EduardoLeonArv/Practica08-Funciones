/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Divisors.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program print in order all the divisors of a given number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
*/

#include <iostream>
#include <cmath>

/**
 * @brief Print an initial message telling what the funcion does
*/
void InitalMessage() {
  std::cout << "This program print in order all the divisors " <<
  "of a given number." << std::endl;
}

/**
 * @brief Calculates the divisors of a number
 * @param divisors Divisor of the choosen number
 * @param number Number chosen to calculate divisors.
*/
void PrintDivisors(const int divisors) {
  std::cout << " " << divisors;
}
void CalculateDivisors(const int number) { 
  const double number_root{sqrt(number)};
  const int root = number_root;
  int dividers;
  for (int iterations{1}; iterations <= root; iterations++) {
    if (number % iterations == 0) {
      PrintDivisors(iterations);
      dividers = iterations;
    }
  }
  for (int iterations = dividers; iterations > 0; iterations--) {
    if (number % iterations == 0 && (number / iterations) != iterations) {
      PrintDivisors(number / iterations);
    }
  }
}

/**
 * @brief Main function.
*/
int main() {
  InitalMessage();
  int new_number;
  while (std::cin >> new_number) {
  std::cout << "divisors of " << new_number << ":";
  CalculateDivisors(new_number);
  std::cout << std::endl;
  }
  return 0;
}