/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file Looking_for.cc
  * @author Juan Eduardo León Arvelo alu0101475615@ull.edu.es
  * @date Nov 20 2022
  * @brief This program print if a sentence cointains "a".
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
#include <vector>
#include <string>

/**
 * @brief Print an initial message telling what the funcion does
*/
void InitalMessage() {
  std::cout << "This program print if a sentence contains a" << std::endl;
}

/**
 * @brief Count how many a are in the sentence and return it.
 * @param inputed_sentence imputed sentence
 * @param sentence imputed sentence
 * @param sentence_lenght lenght of the impouted sentence
 * @param a_counter number of "a" in the imputed sentence
*/
int ContarAs(std::vector<char> inputed_sentence, std::string sentence, int sentence_lenght) {
  int a_counter{0};
  std::copy(sentence.begin(), sentence.end(), std::back_inserter(inputed_sentence));
  for (int contador = 0; contador < sentence_lenght; ++contador) {
    if (inputed_sentence.at(contador) == 'a') {
      a_counter += 1; 
    }
  }
  return a_counter;
}

/**
 * @brief Main function
*/
int main() {
  InitalMessage();
  int sentence_lenght;
  std::string sentence;
  std::getline(std::cin, sentence);
  sentence_lenght = sentence.length();
  std::vector<char> inputed_sentence;
  if (ContarAs(inputed_sentence, sentence, sentence_lenght) != 0) {
    std::cout << "yes" << std::endl;
  }
  else {
    std::cout << "no" << std::endl;
  }
  
  return 0;
}