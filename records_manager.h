#include <string>
#ifndef RECORDS_MANAGERCLASS_HPP
#define RECORDS_MANAGERCLASS_HPP
#include <iomanip>
#include <iostream>

using namespace std;

class RecordsManager{
	int *pantientRecord = NULL;
	int size;
	int capacity;
	public:
		RecordsManager();
		RecordsManager(int nCAp);
		RecordsManager(string listAsJSON);
		int getSize();
		int getCapacity();
		void print();
		void printAsJSON();
		bool insertRecord(unsigned int newCatID, unsigned int newPatID, string newName, string newAddress, string newDOB);
		bool removeRecord(unsigned int categoryID, unsigned int patientID);
		
};
#endif
