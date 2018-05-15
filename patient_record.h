#include <string>
#ifndef PATIENT_RECORDCLASS_HPP
#define PATIENT_RECORDCLASS_HPP
#include <iomanip>
#include <iostream>
#include <cstring>

using namespace std;

class PatientRecord{
	int categoryID, paintentID;
	string name, address, DOB;
	public:
		PatientRecord();
		PatientRecord(unsigned int newCatID, unsigned int newPatID, string newName, string newAddress, string newDOB);
		
		
};
#endif
