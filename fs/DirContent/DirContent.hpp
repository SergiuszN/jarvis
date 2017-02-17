#ifndef CCLASECOMPILER_DIR_CONTENT
#define CCLASECOMPILER_DIR_CONTENT

#include <string>
#include "./Dir/Dir.hpp"
#include "./File/File.hpp"

using namespase std;

class DirContent
{
	public:

	Dir(string path);
	~Dir();

	string getPath();
	int getCountFiles();
	int getCountDirectories;
	File getFile(int index);
	Dir getDir(int index);

	private:

	string path;
	int countFiles;
	int countDirectories;
	File* files;
	Dir* directories;
}

#endif //CCLASECOMPILER_DIR_CONTENT