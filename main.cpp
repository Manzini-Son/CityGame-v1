/*
This is a simple game written in C++... Basically it asks the user questions and the user is expected to answer correctly 
*/
#include <iostream>
#include <limits>
#include <ios>
#include <string>
#include <thread>
#include <chrono>

using std::this_thread::sleep_for;
using std::chrono::seconds;


// Colors for output
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

// Prototypes of functions
void showMenu();
int africa();
int asia();
int europe();
int northAmerica();
int southAmerica();
int antartica();
int oceania();
int score = 0;
// Function to capitalise the first letter of a std::string
std::string capitaliseFirstLetter(const std::string &input) {
  if (input.empty()) {
    return input;
  }
  std::string result = input;
  result[0] = std::toupper(result[0]);
  for (size_t i = 1; i < result.length(); ++i) {
    result[i] = tolower(result[i]);
  }
  return result;
}

// Function for europe
int europe() {
  int score = 0;
  std::cout << BLUE << "Welcome to the European Continent Quiz" << RESET << "\n";
  int answer;

  // Q1
  std::cout << "How many countries are there in Europe?\n";
  std::cout << "1. 44\n";
  std::cout << "2. 50\n";
  std::cout << "3. 40\n";
  std::cout << "4. 60\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "How many countries are there in Europe?\n";
    std::cout << "1. 44\n";
    std::cout << "2. 50\n";
    std::cout << "3. 40\n";
    std::cout << "4. 60\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "44" << RESET << "\n";
  }

  // Q2
  std::cout << "What is the capital of Germany?\n";
  std::cout << "1. Berlin\n";
  std::cout << "2. Munich\n";
  std::cout << "3. Frankfurt\n";
  std::cout << "4. Hamburg\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the capital of Germany?\n";
    std::cout << "1. Berlin\n";
    std::cout << "2. Munich\n";
    std::cout << "3. Frankfurt\n";
    std::cout << "4. Hamburg\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Berlin" << RESET << "\n";
  }

  // Q3
  std::cout << "What is the most populated country in Europe?\n";
  std::cout << "1. Russia\n";
  std::cout << "2. Germany\n";
  std::cout << "3. France\n";
  std::cout << "4. Italy\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the most populated country in Europe?\n";
    std::cout << "1. Russia\n";
    std::cout << "2. Germany\n";
    std::cout << "3. France\n";
    std::cout << "4. Italy\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Germany" << RESET << "\n";
  }

  // Q4
  std::cout << "What is the largest country in Europe?\n";
  std::cout << "1. Ukraine\n";
  std::cout << "2. Germany\n";
  std::cout << "3. France\n";
  std::cout << "4. Italy\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the largest country in Europe?\n";
    std::cout << "1. Ukraine\n";
    std::cout << "2. Germany\n";
    std::cout << "3. France\n";
    std::cout << "4. Italy\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Ukraine" << RESET << "\n";
  }

  // Q5
  std::cout << "What is the smallest country in Europe?\n";
  std::cout << "1. Vatican City\n";
  std::cout << "2. Monaco\n";
  std::cout << "3. San Marino\n";
  std::cout << "4. Liechtenstein\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the smallest country in Europe?\n";
    std::cout << "1. Vatican City\n";
    std::cout << "2. Monaco\n";
    std::cout << "3. San Marino\n";
    std::cout << "4. Liechtenstein\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Vatican City" << RESET << "\n";
  }

  // Q6
  std::cout << "What is the most linguistically diverse country in Europe?\n";
  std::cout << "1. Luxembourg\n";
  std::cout << "2. Germany\n";
  std::cout << "3. Finland\n";
  std::cout << "4. Sweden\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the most linguistically diverse country in Europe?\n";
    std::cout << "1. Luxembourg\n";
    std::cout << "2. Germany\n";
    std::cout << "3. Finland\n";
    std::cout << "4. Sweden\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Luxembourg" << RESET << "\n";
  }

  // Q7
  std::cout << "What is the most populated country in Europe?\n";
  std::cout << "1. Russia\n";
  std::cout << "2. Germany\n";
  std::cout << "3. France\n";
  std::cout << "4. Italy\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the most populated country in Europe?\n";
    std::cout << "1. Russia\n";
    std::cout << "2. Germany\n";
    std::cout << "3. France\n";
    std::cout << "4. Italy\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Germany" << RESET << "\n";
  }

  // Q8
  std::cout << "What is the Capital of Sweden?\n";
  std::cout << "1. Stockholm\n";
  std::cout << "2. Gothenburg\n";
  std::cout << "3. Malmo\n";
  std::cout << "4. Uppsala\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the Capital of Sweden?\n";
    std::cout << "1. Stockholm\n";
    std::cout << "2. Gothenburg\n";
    std::cout << "3. Malmo\n";
    std::cout << "4. Uppsala\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Stockholm" << RESET << "\n";
  }

  // Q9
  std::cout << "What is the Capital of Finland?\n";
  std::cout << "1. Helsinki\n";
  std::cout << "2. Espoo\n";
  std::cout << "3. Tampere\n";
  std::cout << "4. Oulu\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the Capital of Finland?\n";
    std::cout << "1. Helsinki\n";
    std::cout << "2. Espoo\n";
    std::cout << "3. Tampere\n";
    std::cout << "4. Oulu\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Helsinki" << RESET << "\n";
  }

  // Q10
  std::cout << "What is the Capital of Spain?\n";
  std::cout << "1. Madrid\n";
  std::cout << "2. Barcelona\n";
  std::cout << "3. Valencia\n";
  std::cout << "4. Sevilla\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the Capital of Spain?\n";
    std::cout << "1. Madrid\n";
    std::cout << "2. Barcelona\n";
    std::cout << "3. Valencia\n";
    std::cout << "4. Sevilla\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Madrid" << RESET << "\n";
  }

  return score;
}
// Function for Asia
int asia() {
  int score = 0;
  std::cout << BLUE << "Welcome to the Asian Continent Quiz" << RESET << "\n";
  int answer;

  // Q1
  std::cout << "How many countries are there in Asia?\n";
  std::cout << "1. 50\n";
  std::cout << "2. 48\n";
  std::cout << "3. 49\n";
  std::cout << "4. 51\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "How many countries are there in Asia?\n";
    std::cout << "1. 50\n";
    std::cout << "2. 48\n";
    std::cout << "3. 49\n";
    std::cout << "4. 51\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "48" << RESET << "\n";
  }

  // Q2
  std::cout << "What is the capital of Japan?\n";
  std::cout << "1. Tokyo\n";
  std::cout << "2. Kyoto\n";
  std::cout << "3. Osaka\n";
  std::cout << "4. Hiroshima\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input." << RESET << "\n";
    std::cout << "What is the capital of Japan?\n";
    std::cout << "1. Tokyo\n";
    std::cout << "2. Kyoto\n";
    std::cout << "3. Osaka\n";
    std::cout << "4. Hiroshima\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Tokyo" << RESET << "\n";
  }

  // Q3
  std::cout << "What is the most populated country in Asia?\n";
  std::cout << "1. Indonesia\n";
  std::cout << "2. India\n";
  std::cout << "3. China\n";
  std::cout << "4. Pakistan\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the most populated country in Asia?\n";
    std::cout << "1. Indonesia\n";
    std::cout << "2. India\n";
    std::cout << "3. China\n";
    std::cout << "4. Pakistan\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "China" << RESET << "\n";
  }

  // Q4
  std::cout << "What is the largest country in Asia?\n";
  std::cout << "1. Russia\n";
  std::cout << "2. China\n";
  std::cout << "3. India\n";
  std::cout << "4. Indonesia\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the largest country in Asia?\n";
    std::cout << "1. Russia\n";
    std::cout << "2. China\n";
    std::cout << "3. India\n";
    std::cout << "4. Indonesia\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "China" << RESET << "\n";
  }

  // Q5
  std::cout << "What is the smallest country in Asia?\n";
  std::cout << "1. Bahrain\n";
  std::cout << "2. Brunei\n";
  std::cout << "3. Singapore\n";
  std::cout << "4. Maldives\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the smallest country in Asia?\n";
    std::cout << "1. Bahrain\n";
    std::cout << "2. Brunei\n";
    std::cout << "3. Singapore\n";
    std::cout << "4. Maldives\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 4) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Maldives" << RESET << "\n";
  }

  // Q6
  std::cout << "What is the most linguistically diverse country in Asia?\n";
  std::cout << "1. India\n";
  std::cout << "2. China\n";
  std::cout << "3. Indonesia\n";
  std::cout << "4. Pakistan\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the most linguistically diverse country in Asia?\n";
    std::cout << "1. India\n";
    std::cout << "2. China\n";
    std::cout << "3. Indonesia\n";
    std::cout << "4. Pakistan\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "China" << RESET << "\n";
  }

  // Q7
  std::cout << "What is the longest river in Asia?\n";
  std::cout << "1. Yangtze\n";
  std::cout << "2. Ganges\n";
  std::cout << "3. Mekong\n";
  std::cout << "4. Indus\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the longest river in Asia?\n";
    std::cout << "1. Yangtze\n";
    std::cout << "2. Ganges\n";
    std::cout << "3. Mekong\n";
    std::cout << "4. Indus\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Yangtze" << RESET << "\n";
  }

  // Q8
  std::cout << "What is the highest mountain in Asia?\n";
  std::cout << "1. K2\n";
  std::cout << "2. Mount Everest\n";
  std::cout << "3. Kangchenjunga\n";
  std::cout << "4. Lhotse\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the highest mountain in Asia?\n";
    std::cout << "1. K2\n";
    std::cout << "2. Mount Everest\n";
    std::cout << "3. Kangchenjunga\n";
    std::cout << "4. Lhotse\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Mount Everest" << RESET << "\n";
  }

  // Q9
  std::cout << "Which desert covers much of the Middle East?\n";
  std::cout << "1. Gobi\n";
  std::cout << "2. Thar\n";
  std::cout << "3. Arabian\n";
  std::cout << "4. Kalahari\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "Which desert covers much of the Middle East?\n";
    std::cout << "1. Gobi\n";
    std::cout << "2. Thar\n";
    std::cout << "3. Arabian\n";
    std::cout << "4. Kalahari\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Thar" << RESET << "\n";
  }

  // Q10
  std::cout << "Which is the largest lake in Asia?\n";
  std::cout << "1. Caspian Sea\n";
  std::cout << "2. Lake Baikal\n";
  std::cout << "3. Aral Sea\n";
  std::cout << "4. Lake Balkhash\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "Which is the largest lake in Asia?\n";
    std::cout << "1. Caspian Sea\n";
    std::cout << "2. Lake Baikal\n";
    std::cout << "3. Aral Sea\n";
    std::cout << "4. Lake Balkhash\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Caspian Sea" << RESET << "\n";
  }

  return score;
}

// Function for africa
int africa() {
  int score = 0;
  std::cout << BLUE << "Welcome to the African Continent Quiz" << RESET << "\n";
  int answer;
  // Q1
  std::cout << "How many countries are there in Africa?\n";
  std::cout << "1. 60\n";
  std::cout << "2. 42\n";
  std::cout << "3. 54\n";
  std::cout << "4. 24\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "How many countries are there in Africa?\n";
    std::cout << "1. 60\n";
    std::cout << "2. 42\n";
    std::cout << "3. 54\n";
    std::cout << "4. 24\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "54" << RESET << "\n";
  }

  // Q2
  std::cout << "What is the capital of South Africa?\n";
  std::cout << "1. Cape Town\n";
  std::cout << "2. Johannesburg\n";
  std::cout << "3. Bloemfontein\n";
  std::cout << "4. Pretoria\n";
  std::cout << "5. Durban\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 5)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the capital of South Africa?\n";
    std::cout << "1. Cape Town\n";
    std::cout << "2. Johannesburg\n";
    std::cout << "3. Bloemfontein\n";
    std::cout << "4. Pretoria\n";
    std::cout << "5. Durban\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 4) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Pretoria" << RESET << "\n";
  }

  // Q3
  std::cout << "What is the most populated country in Africa?\n";
  std::cout << "1. Zimbabwe\n";
  std::cout << "2. Nigeria\n";
  std::cout << "3. Egypt\n";
  std::cout << "4. Kenya\n";
  std::cout << "5. South Africa\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 5)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the most populated country in Africa?\n";
    std::cout << "1. Zimbabwe\n";
    std::cout << "2. Nigeria\n";
    std::cout << "3. Egypt\n";
    std::cout << "4. Kenya\n";
    std::cout << "5. South Africa\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Nigeria" << RESET << "\n";
  }

  // Q4
  std::cout << "What is the largest country in Africa?\n";
  std::cout << "1. Nigeria\n";
  std::cout << "2. Zimbabwe\n";
  std::cout << "3. Algeria\n";
  std::cout << "4. Kenya\n";
  std::cout << "5. South Africa\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 5)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the largest country in Africa?\n";
    std::cout << "1. Nigeria\n";
    std::cout << "2. Zimbabwe\n";
    std::cout << "3. Algeria\n";
    std::cout << "4. Kenya\n";
    std::cout << "5. South Africa\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Algeria" << RESET << "\n";
  }

  // Q5
  std::cout << "What is the smallest country on mainland Africa?\n";
  std::cout << "1. Ghana\n";
  std::cout << "2. Zimbabwe\n";
  std::cout << "3. The Gambia\n";
  std::cout << "4. Kenya\n";
  std::cout << "5. DR Congo\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 5)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the smallest country on mainland Africa?\n";
    std::cout << "1. Ghana\n";
    std::cout << "2. Zimbabwe\n";
    std::cout << "3. The Gambia\n";
    std::cout << "4. Kenya\n";
    std::cout << "5. DR Congo\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "The Gambia" << RESET << "\n";
  }

  // Q6
  std::cout << "What is the most linguistically diverse country in Africa?\n";
  std::cout << "1. South Africa\n";
  std::cout << "2. Zimbabwe\n";
  std::cout << "3. Egypt\n";
  std::cout << "4. Kenya\n";
  std::cout << "5. Nigeria\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 5)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the most linguistically diverse country in Africa?\n";
    std::cout << "1. South Africa\n";
    std::cout << "2. Zimbabwe\n";
    std::cout << "3. Egypt\n";
    std::cout << "4. Kenya\n";
    std::cout << "5. Nigeria\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 5) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Nigeria" << RESET << "\n";
  }

  // Q7
  std::cout << "What is the longest river in Africa?\n";
  std::cout << "1. Zambezi\n";
  std::cout << "2. Congo\n";
  std::cout << "3. Niger\n";
  std::cout << "4. Nile\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 1 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the longest river in Africa?\n";
    std::cout << "1. Zambezi\n";
    std::cout << "2. Congo\n";
    std::cout << "3. Niger\n";
    std::cout << "4. Nile\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 4) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Nile" << RESET << "\n";
  }

  // Q8
  std::cout << "What is the highest mountain in Africa?\n";
  std::cout << "1. Mount Kenya\n";
  std::cout << "2. Mount Kilimanjaro\n";
  std::cout << "3. Atlas Mountains\n";
  std::cout << "4. Drakensberg\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 1 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "What is the highest mountain in Africa?\n";
    std::cout << "1. Mount Kenya\n";
    std::cout << "2. Mount Kilimanjaro\n";
    std::cout << "3. Atlas Mountains\n";
    std::cout << "4. Drakensberg\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Mount Kilimanjaro" << RESET << "\n";
  }

  // Q9
  std::cout << "Which desert covers much of North Africa?\n";
  std::cout << "1. Kalahari\n";
  std::cout << "2. Namib\n";
  std::cout << "3. Sahara\n";
  std::cout << "4. Gobi\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 1 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "Which desert covers much of North Africa?\n";
    std::cout << "1. Kalahari\n";
    std::cout << "2. Namib\n";
    std::cout << "3. Sahara\n";
    std::cout << "4. Gobi\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Sahara" << RESET << "\n";
  }

  // Q10
  std::cout << "Which is the largest lake in Africa?\n";
  std::cout << "1. Lake Tanganyika\n";
  std::cout << "2. Lake Malawi\n";
  std::cout << "3. Lake Victoria\n";
  std::cout << "4. Lake Chad\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 1 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Invalid input.\n";
    std::cout << "Which is the largest lake in Africa?\n";
    std::cout << "1. Lake Tanganyika\n";
    std::cout << "2. Lake Malawi\n";
    std::cout << "3. Lake Victoria\n";
    std::cout << "4. Lake Chad\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Lake Victoria" << RESET << "\n";
  }

  return score;
}
// Function for North America
int northAmerica() {
  std::cout << BLUE << "Welcome to the North American Continent Quiz" << RESET << "\n";
  int answer;
  // Q1
  std::cout << "How many states are there in the United States of America?\n";
  std::cout << "1. 52\n";
  std::cout << "2. 48\n";
  std::cout << "3. 50\n";
  std::cout << "4. 51\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "How many states are there in the United States of America?\n";
    std::cout << "1. 52\n";
    std::cout << "2. 48\n";
    std::cout << "3. 50\n";
    std::cout << "4. 51\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "50" << RESET << "\n";
  }

  // Q2
  std::cout << "Which is the largest state in the United States of America?\n";
  std::cout << "1. Texas\n";
  std::cout << "2. California\n";
  std::cout << "3. Alaska\n";
  std::cout << "4. New York\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "Which is the largest state in the United States of America?\n";
    std::cout << "1. Texas\n";
    std::cout << "2. California\n";
    std::cout << "3. Alaska\n";
    std::cout << "4. New York\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 3) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Alaska" << RESET << "\n";
  }

  // Q3
  std::cout << "Which is the largest country in North America?\n";
  std::cout << "1. Greenland\n";
  std::cout << "2. United States of America\n";
  std::cout << "3. Mexico\n";
  std::cout << "4. Canada\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "Which is the largest country in North America?\n";
    std::cout << "1. Greenland\n";
    std::cout << "2. United States of America\n";
    std::cout << "3. Mexico\n";
    std::cout << "4. Canada\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 4) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "Canada" << RESET << "\n";
  }

  // Q4
  std::cout << "Which is the largest city in North America?\n";
  std::cout << "1. New York\n";
  std::cout << "2. Los Angeles\n";
  std::cout << "3. Toronto\n";
  std::cout << "4. Mexico City\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "Which is the largest city in North America?\n";
    std::cout << "1. New York\n";
    std::cout << "2. Los Angeles\n";
    std::cout << "3. Toronto\n";
    std::cout << "4. Mexico City\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 1) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "New York" << RESET << "\n";
  }
  // Q5
  std::cout << "How many rivers are there in North America?\n";
  std::cout << "1. 1000\n";
  std::cout << "2. 2000\n";
  std::cout << "3. 3000\n";
  std::cout << "4. 4000\n";
  std::cout << "0. Back\n";
  std::cout << "Answer: ";
  std::cin >> answer;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  while (std::cin.fail() || (answer < 0 || answer > 4)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << YELLOW << "Invalid input!" << RESET << "\n";
    std::cout << "How many rivers are there in North America?\n";
    std::cout << "1. 1000\n";
    std::cout << "2. 2000\n";
    std::cout << "3. 3000\n";
    std::cout << "4. 4000\n";
    std::cout << "0. Back\n";
    std::cout << "Answer: ";
    std::cin >> answer;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  if (answer == 2) {
    std::cout << GREEN << "Correct!" << RESET << "\n";
    score++;
  } else if (answer == 0) {
    showMenu();
  } else {
    std::cout << RED << "Incorrect!" << RESET << "\n";
    std::cout << "The correct answer is " << GREEN << "2000" << RESET << "\n";
  }
  return score;
}

// Main function
void showMenu() {
    std::cout << GREEN << "---------------------------------------------------" << RESET << "\n";
    std::cout << GREEN << "Please select a continent from the list, below..." << RESET << "\n";
    std::cout << GREEN << "---------------------------------------------------" << RESET << "\n";
    std::cout << "1. Africa\n";
    std::cout << "2. Asia\n";
    std::cout << "3. Europe\n";
    std::cout << "4. North America\n";
    std::cout << "5. South America (Coming Soon)\n";
    std::cout << "6. Oceania (Coming Soon)\n";
    std::cout << "7. Antarctica (Coming Soon)\n";
    std::cout << "0. Exit\n";
    std::cout << "Select a continent: ";
    int choice;
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (std::cin.fail() || choice < 0 || choice > 7) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cerr << YELLOW << "Invalid input." << RESET << "\n";
      std::cout << "1. Africa\n";
      std::cout << "2. Asia\n";
      std::cout << "3. Europe\n";
      std::cout << "4. North America\n";
      std::cout << "5. South America (Coming Soon)\n";
      std::cout << "6. Oceania (Coming Soon)\n";
      std::cout << "7. Antarctica (Coming Soon)\n";
      std::cout << "0. Exit\n";
      std::cout << "Select a continent: ";
      std::cin >> choice;
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    if (choice == 1) {
      int score = africa();
      std::cout << "\nQuiz Finished!\n";
      std::cout << "Your total score: " << score << " out of 10\n";
    }
    else if (choice == 2) {
      int score = asia();
      std::cout << "\nQuiz Finished!\n";
      std::cout << "Your total score: " << score << " out of 10\n";
    } 
    else if (choice == 3) {
      int score = europe();
      std::cout << "\nQuiz Finished!\n";
      std::cout << "Your total score: " << score << " out of 10\n";
    } 
    else if (choice == 4) {
      int score = northAmerica();
      std::cout << "\nQuiz Finished!\n";
      std::cout << "Your total score: " << score << " out of 10\n";
    } 
    else if (choice == 0) {
      std::cout << "Thank you for playing. Goodbye\n";
      sleep_for(seconds(2));
      exit(0);
    } 
    else {
      std::cout << "Sorry, this continent is not implemented yet. Please try Africa, Asia, Europe or North America.\n";
    }
    return; 
  }
  

int main () {
  std::cout << BLUE << "Welcome to City Game!" << RESET << "\n";
  sleep_for(seconds(2));
  while (true) {
    showMenu();
  }
  return 0;
}
