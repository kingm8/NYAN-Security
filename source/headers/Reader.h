//--------------------------------------------
// Written By: Matthew King
// Github Account: kingm8
// Project Title: NYAN Security
// File Name: Reader.h
// File Descrip: Prototypes the Reader class, which
//		serves as the parser for the files that store
//		user data after program shutdown
// Course ID: CSC260
// Course Title: Software Engineering
//--------------------------------------------

#if !defined (READER_H)
#define READER_H
#include <iostream>
#include <fstream>
#include "List.h"
#include "Account.h"
#include "StandardAccount.h"
#include "DescribedAccount.h"
#include "SubscribedAccount.h"
#include <cstdlib>
using namespace std;

class Reader
{
	private:
		string fileName;
		ifstream inS;
		
	public:
		Reader(string);
		bool openFile();
		string readAll(LinkedList*);
		void closeFile();
};

#endif
