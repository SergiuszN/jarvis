#include "File.hpp"

using namespace std;

File::File() {

}

File::File(string name) {
	this->define(name);
}

void File::define(std::string name) {
	size_t separatorPosition = name.find(File::separator);

	this->setFullName(name);
	this->setName(name);
	this->setType("");

	if (this->isNameConsist(this->separator)) {
		this->setName(name.substr(0, separatorPosition));
		this->setType(name.substr(separatorPosition + 1, name.length()));
	}
}

bool File::isNameConsist(std::string pattern) {
	return (this->getFullName().find(pattern) != string::npos);
}

void File::print() {
	printf("name: '%s', type: '%s', all: '%s'\n", this->getName().c_str(), this->getType().c_str(), this->getFullName().c_str());
}


// ************************************* GET\SET ****************************************

void File::setName(std::string name) {
	this->name = name;
}

void File::setType(std::string type) {
	this->type = type;
}

void File::setFullName(std::string fileFullName) {
	this->fullName = fileFullName;
}

string File::getName() {
	return this->name;
}

string File::getType() {
	return this->type;
}

string File::getFullName() {
	return this->fullName;
}