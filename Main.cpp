#pragma warning(disable:4996)

#include "crypto.h"
#include "tinyfiledialogs.h"
#include "prime.h"
#include "key.h";

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <string>
#include <fstream>


int main()
{
	std::cout << modpow(123, 17, 3233) << std::endl;
	std::cout << modpow(855, 2753, 3233) << std::endl;



	int cont = 1;
	do
	{
		File file = File();

		getKey(file);
		std::cin >> cont;

	} while (cont);

	system("pause");


	/*
	while (tinyfd_messageBox("Cewein's encrypting software","Would you like to\nencrypt a file ?","yesno","question",2))
	{

		File file(tinyfd_openFileDialog("Choose a file to open", NULL, 0, NULL, NULL, 0));
		file.readFile();
		file.selectName();
		file.getEncryptionKey(tinyfd_inputBox("Insert Encryption key", "Insert the encryption key in the space below", ""));
		file.encryptFile();
		file.writeFile(file.fileEncrypt, file.fileName);
		//tinyfd_beep();
	}
	*/
	

	return 0;
}

