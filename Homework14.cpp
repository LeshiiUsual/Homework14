// Homework14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

int main()
{
	std::cout << "Write word: ";
	std::string word;
	std::cin >> word;

	std::cout << word << "\n";
	std::cout << word.length() << "\n";
	std::cout << word[0] << "\n";
	std::cout << word[word.length()-1] << "\n";

	std::cin;
	return 0;
}