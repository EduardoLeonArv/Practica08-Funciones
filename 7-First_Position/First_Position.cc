/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file First_Position.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program prints the position of the first even 
  * number of the entered sequence
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
#include <cmath>

/**
 * @brief Print an initial message telling what the funcion does
*/
void InitalMessage() {
  std::cout << "This program prints the position of the first even " <<
  "number of the entered sequence." << std::endl;
}

/**
 * @brief Calculates if a number is even and returns the position of 
 * the first even number
 * @param position Position of the number in the sequence
 * @param number Entered sequence number
*/
int CheckIfANumberIsEven (const int number) {
  int position{0};
  if (number == 0) {
    position = position;
  }
  if (number == 1) {
    position = position;
  }
  if (number % 2 == 0) {
    position = position + 1;
  }
  return position;
}

/**
 * @brief Main function
*/
int main() {
    InitalMessage();
  int chosen_number;
  int position{1};
  while (std::cin >> chosen_number) {
    if(CheckIfANumberIsEven(chosen_number) == 0) {
      position++;
    }
    else {
      std::cout << position << std::endl;
      break;
    }
  }
  return 0;
}