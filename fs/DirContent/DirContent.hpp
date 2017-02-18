#ifndef CLASS_DIR_CONTENT
#define CLASS_DIR_CONTENT

#include <iostream>
#include <string>
#include <vector>
#include "./Dir/Dir.hpp"
#include "./File/File.hpp"

struct tinydir_dir;
#include "../../vendor/tinydir/tinydir.h"

class DirContent
{
	public:

		DirContent(std::string);
		~DirContent();

		std::string getPath();
		int getCountFiles();
		int getCountDirectories();
		File getFile(int);
		Dir getDir(int);

		void setPath(std::string);

	private:

		std::string path;
		int countFiles;
		int countDirectories;
		std::vector<File> files;
		std::vector<Dir> directories;

		void fetchAllInDirectory();
};

#endif //CLASS_DIR_CONTENT
