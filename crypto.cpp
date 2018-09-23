#include "crypto.h"
#include "key.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <bitset>
#include <ctime>


File::File() {}
File::File(const char * c_filePath) : filePath(c_filePath) {}

File::~File() {}

void File::encryptFile()
{

	

}

void File::readFile()
{
	//open file
	std::ifstream file;
	file.open(filePath, std::fstream::in | std::fstream::binary);

	//file length
	file.seekg(0, file.end);
	int length = file.tellg();
	file.seekg(0, file.beg);
	std::cout << length << std::endl;

	//add char to sttring
	char c;
	char cryp;
	int i = 0;
	while (file.get(c))
	{
		fileClear += c;
	}
	//response
	file.close();

}

void File::readFile(const char * c_filePath)
{
	//open file
	std::ifstream file;
	file.open(c_filePath, std::fstream::in | std::fstream::binary);

	//file length
	file.seekg(0, file.end);
	int length = file.tellg();
	file.seekg(0, file.beg);
	std::cout << length << std::endl;

	//private in class
	std::string fileReturn;

	//add char to sttring
	char c;
	char cryp;
	int i = 0;
	while (file.get(c))
	{
		fileReturn += c;
	}

	//response
	filePath = c_filePath;
	fileClear = fileReturn;
	file.close();

}

void File::writeFile(std::string charsToWrite)
{
	std::ofstream secureFile;
	secureFile.open("SecureFile.cew");
	secureFile << charsToWrite;
	secureFile.close();
	std::cout << "file secure and created" << std::endl;
}

void File::writeFile(std::string charsToWrite, std::string name)
{
	std::ofstream secureFile;
	secureFile.open(name);
	secureFile << charsToWrite;
	secureFile.close();
	std::cout << "file secure and created with the name " << name << std::endl;
}

void File::selectName()
{
	fileName.clear();
	int i = filePath.length() - 1;
	while (filePath[i-1] != 92) 
	{
		i--;
	}
	while (i < filePath.length())
	{
		fileName += filePath[i];
		i++;
	}
}

void File::POF(int length, int i)
{
	int pourcent;
	pourcent = (length * 100) / length;
	system("cls");
	std::cout << pourcent << std::endl;
}


