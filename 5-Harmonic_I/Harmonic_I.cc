/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Harmonic_I.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program reads a number n and prints the n-th harmonic number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
#include <iomanip>

/**
 * @brief Print an initial message telling what the program does
*/
void InitalMessage() {
  std::cout << "This program reads a number n" <<
  " and prints the n-th harmonic number." << std::endl;
}

/**
 * @brief Print The final result
 * @param harmonic_number Harmonic number calculated
*/
void PrintResult(double harmonic_number) {
  std::cout << std::fixed;
  std::cout << std::setprecision(4) << harmonic_number << std::endl;
}

/**
 * @brief Calculates the n-th harmonic number
 * @param result Harmonic number calculated
 * @param number Entered number to calculate the n-th harmonic number
*/
void CalculateHarmonicNmber(const double number) {
  double result{0};
  for(double iteration{1}; iteration <= number; iteration++) {
    double cocient{1/iteration};
    result = result + cocient; 
  }
  PrintResult(result);
}

/**
 * @brief main function
*/
int main() {
  InitalMessage();
  double chosen_number;
  std::cin >> chosen_number;
  CalculateHarmonicNmber(chosen_number);
  return 0;
}
