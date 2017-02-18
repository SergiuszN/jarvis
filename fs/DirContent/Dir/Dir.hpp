#ifndef CCLASECOMPILER_DIR
#define CCLASECOMPILER_DIR

#include <string>
#include <iostream>

class Dir
{
	private:
		std::string name;

	public:
		Dir();
		Dir(std::string name);
		bool isNameConsist(std::string pattern);

		std::string getName();

		void setName(std::string name);
		void define(std::string name);
		void print();
};

#endif //CCLASECOMPILER_DIR
