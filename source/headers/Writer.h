//--------------------------------------------
// Written By: Matthew King
// Github Account: kingm8
// Project Title: NYAN Security
// File Name: Writer.h
// File Descrip: Prototype for the Writer class,
//		which writes all user data to file to 
//		preserve it after program shutdown.
// Course ID: CSC260
// Course Title: Software Engineering
//--------------------------------------------

#if !defined (WRITER_H)
#define WRITER_H
#include <iostream>
#include <fstream>
#include "List.h"
#include "Account.h"
#include "DescribedAccount.h"
#include "SubscribedAccount.h"
using namespace std;

class Writer
{
	private:
		string fileName;
		ofstream outS;
		
	public:
		Writer(string);
		bool openFile();
		
		void writeAll(string, LinkedList*);
		void closeFile();
};

#endif
