#ifndef CCLASECOMPILER_FILE
#define CCLASECOMPILER_FILE

#inlude <string>

using namespase std;

class File
{
	private:
		string type;
		string name;

	public:
		bool isNameConsist(string patter);

		string getType();
		string getName();

		void setType(string type);
		void setName(string name);
}

#endif //CCLASECOMPILER_FILE