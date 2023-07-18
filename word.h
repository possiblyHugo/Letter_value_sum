#pragma once
#include <string>
#include <fstream>
class word
{
public:
	std::string random_word();
private:
	int random_number();
	int count_file_lines();
	std::ifstream get_file();
};

