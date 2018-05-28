#ifndef CRYTPO_H_INCLUDED
#define CRYPTO_H_INCLUDED

#include <iostream>
#include <fstream>

class File {
public:

	//creator/destructor

	File();
	File(const char * filePath);
	~File();

	//No need for privacy it's unreadible or just name file
	std::string fileEncrypt;
	std::string fileName;

	//no description needed
	void intro(); // ok
	void selectName(); //ok

	void readFile(); //ok
	void readFile(const char * c_filePath); // ok


	//encryption
	void encryptFile(); //ok
	void writeFile(std::string charsToWrite); //ok ?
	void writeFile(std::string charsToWrite, std::string name); //ok ?

	//pourcentage !! NOT WORKING !!
	void POF(int length, int i);

private:

	std::string filePath;
	std::string fileClear;

	std::string key;

};
#endif // !CRYTPO_H_INCLUDED

