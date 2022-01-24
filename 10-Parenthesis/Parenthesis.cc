/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Parenthesis.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 23 2022
  * @brief This program tells if a sequence of parenthesis is closed correctly
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111
  */

#include <iostream>

/**
 * @brief Print an inital massage telling what the programd does.
*/
void InitalMessage() {
  std::cout << "This program tells if a sequence of parenthesis "
  << "is closed correctly" << std::endl;
}

/**
 * @brief Test is the sequence of parenthesis is closed correctly
 * @param parenthesis parenthesis in the sentence
 * @param parenthesis_counter parenthesis counter to check if its closed
*/
int TestParenthesis(char parenthesis, int parenthesis_counter ) {
  if (parenthesis == '(') {
    ++parenthesis_counter;
  }
  else if (parenthesis == ')'){
    --parenthesis_counter;
  }
  return parenthesis_counter;
}

/**
 * @brief Main function.
*/
int main() {
  InitalMessage();
  char parenthesis;
  int result{0};
  while ((std::cin >> parenthesis) && (result >= 0)){
    result = TestParenthesis(parenthesis, result); + result;
  }
  if (result == 0) {
    std::cout << "yes" << std::endl;
  }
  else {
    std::cout << "no" << std::endl;
  }  
}