#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::fstream	file;
	std::fstream	result;
	std::string		tmp;
	int				rlen;

	if (argc != 4)
		return 1;
	file.open(argv[1], std::ios::in);
	if (!file)
		return 1;
	file >> tmp;
	rlen = tmp.length();



	result.close();
	file.close();
	return 0;
}
