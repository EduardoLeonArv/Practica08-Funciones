/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Primality.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program check if a number is prime
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
#include <cmath>

/**
 * @brief Print an initial message telling what the funcion does
*/
void InitalMessage() {
  std::cout << "This program check if a number is prime" << std::endl;
}

/**
 * @brief This program print if the number is prime or not
 * @param result final result if the number is prime or not
 * @param number number imputed by the user
*/
void PrintIfTheNumberIsPrime(int result, const int number) {
  if (result == 0) {
    std::cout << number << " is prime" << std::endl;
  }
  if (result == 1) {
    std::cout << number << " is not prime" << std::endl;
  }
}

/**
 * @brief This program calculates if a number is prime or not
 * @param number number imputed by the user
 * @param dividers dividers of the imputed numbers
*/
void CheckIfANumberIsPrime (const int number) {
  int dividers{0};
  int number_root = sqrt(number);
  if (number == 0) {
    dividers = dividers + 1;
    PrintIfTheNumberIsPrime(dividers, number);
    return;
  }
  if (number == 1) {
    dividers = dividers + 1;
    PrintIfTheNumberIsPrime(dividers, number);
    return;
  }
  for (int iteration{2}; iteration <= number_root; iteration++) {
    if (number % iteration == 0) {
      dividers = dividers +1;
      PrintIfTheNumberIsPrime(dividers, number);
      return;
    }
  }
  PrintIfTheNumberIsPrime(0, number);
  return;
}

/**
 * @brief Main function
*/
int main() {
  InitalMessage();
  int set_numbers;
  std::cin >> set_numbers;
  int chosen_number;
  for (int iterations{0}; set_numbers > iterations; iterations++) {
    std::cin >> chosen_number;
    if (chosen_number >= 0) {
      CheckIfANumberIsPrime(chosen_number);
    }
  }
  return 0;
}