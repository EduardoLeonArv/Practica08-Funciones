/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Aproximation.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 23 2022
  * @brief This program print the aproximation of e in function of the terms
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111
  */

#include <iostream>
#include <iomanip>

/**
 * @brief Print an inital massage telling what the programd does.
*/
void InitalMessage() {
  std::cout << "This program print the aproximation "
  << "of e in function of the terms" << std::endl;
}

/**
 * @brief Print the aproximation of e in function of the terms
 * @param result Result after approximating e.
 * @param number Number chosen to approximate e.
*/
void PrintNumber(const double result, const int number) {
  std::cout << std::fixed;
  std::cout << "With " << number << " term(s) we get " <<
  std::setprecision(10) << result << "." << std::endl;
}

/**
 * @brief Calculates the factorial of a number
 * @param result Calculated factorial.
 * @param number Number chosen to approximate e.
*/
double Factorial(const int number) {
  double result{1};
  for(int iteration{1}; iteration <= number; iteration++) {
    result = result * iteration;
  }
  return result;
}

/**
 * @brief Calculates the aproximation of e in function of the terms
 * @param result Result after approximating e.
 * @param number Number chosen to approximate e.
*/
void AproximationOfe(const int number) {
  double result{0};
  for(int iteration{1}; iteration <= number; iteration++) {
    result = result + (iteration / Factorial(iteration));
  }
  PrintNumber(result, number);
}

/**
 * @brief main function.
 * @param chosen_number Number chosen to approximate e.
*/
int main() {
  InitalMessage();
  int chosen_number;
  while(std::cin >> chosen_number) {
    AproximationOfe(chosen_number);
  }
}

