/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i_th.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program print what number is in the selected
  * position in a sequence of numbers.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>

/**
 * @brief Print an initial message telling what the funcion does
*/
void InitalMessage() {
  std::cout << "This program print what number is in the selected " <<
  "position in a sequence of numbers." << std::endl;
}

/**
 * @brief Print the numbers in the selected position
 * @param print_position Position selected to check
 * @param print_number Number in the position selected
*/
void PrintNumber(int number, int position) {
  std::cout << "At the position " << position <<  " there is a(n) " 
  << number << "." << std::endl;
}

/**
 * @brief Calculate the number in the position
 * @param print_position Position selected to check
 * @param print_number Number in the position selected
*/
void ChechNumberInPosition(int position_selected, int number_selected, int iteration) {
  if (iteration == 1) {
    PrintNumber(number_selected, position_selected);
  }
}

/**
 * @brief Main function
*/
int main() {
  InitalMessage();
  int position;
  std::cin >> position;
  int number;
  int iteration{position};
  while (std::cin >> number) {
    ChechNumberInPosition(position, number, iteration);
    iteration--;
  }
  return 0;
}