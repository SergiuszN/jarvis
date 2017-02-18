#include "./DirContent.hpp"

using namespace std;

DirContent::DirContent(string path) {
	this->setPath(path);
	this->fetchAllInDirectory();

	cout << "Path: " << path << endl;
	cout << "Founded File:" << endl;
	size_t fileCont = this->files.size();
	for (int i=0; i<fileCont; i++) {
		this->files[i].print();
	}
	cout << "Founded Directories:" << endl;
	size_t dirCount = this->directories.size();
	for (int i=0; i<dirCount; i++) {
		this->directories[i].print();
	}
}

DirContent::~DirContent() {

}

void DirContent::fetchAllInDirectory() {
	tinydir_dir dir;
	size_t i;
	tinydir_open_sorted(&dir, this->path.c_str());

	string name;

	for (i = 0; i < dir.n_files; i++)
	{
		tinydir_file file;
		tinydir_readfile_n(&dir, &file, i);
		name = file.name;

		if (file.is_dir) {
			this->directories.push_back(Dir(name));
		} else {
			this->files.push_back(File(name));
		}
	}

	tinydir_close(&dir);
}


// ************************************* GET\SET ****************************************

void DirContent::setPath(string path) {
	this->path = path;
}

string DirContent::getPath() {
	return this->path;
}