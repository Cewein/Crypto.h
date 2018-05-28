#pragma warning(disable:4996)

#include "crypto.h"
#include "tinyfiledialogs.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>

int main()
{
	//test
	std::cout << " test area :" << std::endl;
	char key = 'a';

	key = key - 'd' + 'g' - 'a' + 'D' - 2 + 6 - 4;
	std::cout << key << std::endl;
	key = key + 'd' - 'g' + 'a' - 'D' + 2 - 6 + 4;
	std::cout << key << std::endl;
	tinyfd_beep();

	while (tinyfd_messageBox("Cewein's encrypting software","Would you like to\nencrypt a file ?","yesno","question",2))
	{

		File file(tinyfd_openFileDialog("Choose a file to open", NULL, 0, NULL, NULL, 0));
		file.readFile();
		file.selectName();
		file.encryptFile();
		file.writeFile(file.fileEncrypt, file.fileName);
		tinyfd_beep();
	}

	return 0;
}

