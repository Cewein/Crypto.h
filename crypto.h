#pragma once
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

	//rsa
	int p;
	int q;
	int n;
	int nT;
	int e;
	int d;


	//No need for privacy it's unreadible or just name file
	std::string fileEncrypt;
	std::string fileName;

	void selectName();

	void readFile();
	void readFile(const char * c_filePath);

	//encryption
	void encryptFile();
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

