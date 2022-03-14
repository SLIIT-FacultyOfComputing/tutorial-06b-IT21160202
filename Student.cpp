#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int astudentId, const char *aname) {
	studentId = astudentId;
	strcpy(name, aname);
}

// Display StudentId and Name
void Student::display() {
	cout << "Student ID: " << studentId << endl;
	cout << "Student Name: " << name << endl;
}