/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Three_Words.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program reads three words and print them in reverse
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
#include <string.h>

/**
 * @brief Print an initial message telling what the funcion does
*/
void InitalMessage() {
  std::cout << "This program reads three words and " <<  
  "print them in reverse" << std::endl;
}

/**
 * @brief Print the 3 words imputed in reverse sense
 * @param change_word1 1º word imputed
 * @param change_word2 2º word imputed
 * @param change_word3 3º word imputed
*/
void ChangeSense ( std::string change_word1, std::string change_word2, std::string change_word3) {
  std::cout << change_word3 << " " << change_word2 << " " << change_word1 << std::endl; 
}

/**
 * @brief Main function
*/
int main() {
  InitialMessage();
  std::string word1;
  std::string word2;
  std::string word3;
  std::cin >> word1 >> word2 >> word3;
  ChangeSense(word1, word2, word3);
  return 0;
}