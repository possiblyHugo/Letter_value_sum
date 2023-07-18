#include "word.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // randomize

std::string word::random_word()
{
    int current_line_number= 0;
    int rand_number = count_file_lines() % random_number();
    std::string line;
    
    std::ifstream wordList;
    wordList.open("enable1.txt");

    while (std::getline(wordList, line))
    {
        current_line_number++;
        if (current_line_number == rand_number)
        {
            return line;
        }
    }

    return std::string();
}

int word::random_number()
{
    // Rand seed
    std::srand((unsigned)time(NULL));

    return rand();
}

int word::count_file_lines()
{
    std::ifstream wordList;
    wordList.open("enable1.txt");

    // Check if file opens
    if (!wordList) 
    {
        std::cerr << "Could not open file!";
        return 1;
    }

    std::size_t number_of_lines = 0;
    std::string current_line;
    while (std::getline(wordList, current_line))
    {
        number_of_lines++;
    }

    return static_cast<int> (number_of_lines);
}

