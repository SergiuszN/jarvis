#include <iostream>
#include "fs/DirContent/DirContent.hpp"
#include "console/console.hpp"

using namespace std;

int main(int argc, char** argv)
{
	string path(".");
	if (argc == 2) {
		path = argv[1];
	}

	DirContent directory(path);

	cout << "----------------------Console Test------------------\n";
	Console console("echo It works right");
	console.runCommand();
	cout << console.getResult();
	cout << "-------------------Console Test End-----------------\n";
	return 0;
}
