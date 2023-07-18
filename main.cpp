#include <iostream>
#include <string>
#include "word.h"
// a = 97, z = 122
int main() {
	word new_word;
	std::string rand_word = new_word.random_word();

	// Placeholder
	int continuousValue = 0;

	
	for (int i = 0; i < rand_word.length(); i++)
	{
		continuousValue += (int(rand_word[i]) - 96);
	}

	std::cout << "Selected word: " << rand_word << "\nLetterValue: " << continuousValue << std::endl;
	

	return 0;
}