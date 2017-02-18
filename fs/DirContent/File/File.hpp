#ifndef CCLASECOMPILER_FILE
#define CCLASECOMPILER_FILE

#include <string>

class File
{
	private:
		std::string type;
		std::string name;
		std::string fullName;

	public:
		const std::string separator= ".";
		File();
		File(std::string name);
		bool isNameConsist(std::string pattern);

		std::string getType();
		std::string getName();
		std::string getFullName();

		void setType(std::string type);
		void setName(std::string name);
		void setFullName(std::string fileFullName);
		void define(std::string notParsedName);
		void print();
};

#endif //CCLASECOMPILER_FILE