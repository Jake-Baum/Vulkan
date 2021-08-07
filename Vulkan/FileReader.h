#include <vector>
#include <string>
#include <fstream>

#pragma once
class FileReader
{
public:
	static std::vector<char> readFile(const std::string&);
};

