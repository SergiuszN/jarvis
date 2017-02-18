#include <iostream>
#include "fs/DirContent/DirContent.hpp"

using namespace std;

int main(int argc, char** argv)
{
	string path(".");
	if (argc == 2) {
		path = argv[1];
	}

	DirContent directory(path);
	return 0;
}