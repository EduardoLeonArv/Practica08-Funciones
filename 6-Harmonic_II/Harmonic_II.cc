/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Harmonic_II.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program calculates the diference between 2 harmonic numbers.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
#include <iomanip>

/**
 * @brief Print an initial message telling what the funcion does
*/
void InitalMessage() {
  std::cout << "This program  calculates the diference " <<
  " between 2 armonic numbers." << std::endl;
}

/**
 * @brief Print the diference between 2 armonic numbers.
 * @param harmonic_number diference between 2 armonic numbers.
*/
void PrintResult(const double harmonic_number) {
  std::cout << std::fixed;
  std::cout << std::setprecision(10) << harmonic_number << std::endl;
}

/**
 * @brief Calculates the diference between 2 harmonic numbers
 * @param result Harmonic number calculated
 * @param number_1 1º number entered to calculate the n-th harmonic number
 * @param number_2 2º number entered to calculate the n-th harmonic number
*/
void CalculateHarmonicNmberDiffecrence(const int number_1, const int number_2) {
  long double result{0.0};
  for(int iteration{1 + number_2}; iteration <= number_1; iteration++) {
    result += (1.0 /  iteration);
  }
  PrintResult(result);
}

/**
 * @brief Main function
*/
int main() {
  InitalMessage();
  int chosen_number_1;
  int chosen_number_2;
  while(std::cin >> chosen_number_1 >> chosen_number_2) {
    CalculateHarmonicNmberDiffecrence(chosen_number_1, chosen_number_2);
  }
  return 0;
}

