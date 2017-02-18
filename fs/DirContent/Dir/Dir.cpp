#include "Dir.hpp"

using namespace std;

Dir::Dir() {

}

Dir::Dir(std::string name) {
	this->define(name);
}

void Dir::define(std::string name) {
	this->setName(name);
}

bool Dir::isNameConsist(string pattern) {
	return (this->getName().find(pattern) != string::npos);
}

void Dir::print() {
	printf("name: %s\n", this->getName().c_str());
}

// ************************************* GET\SET ****************************************

void Dir::setName(std::string name) {
	this->name = name;
}

string Dir::getName() {
	return this->name;
}

