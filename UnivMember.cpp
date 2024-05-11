//Name: Tadael Mihret
#include "UnivMember.h"
#include <iostream>

using namespace std;

UnivMember::UnivMember() {} //default constructor

//parametrized constructor
UnivMember::UnivMember(const ID& id, const Name& name, const string& role) : UnivID(id), UnivName(name), role(role) {}

//copy constructor 
UnivMember::UnivMember(const UnivMember& other) : UnivID(other.UnivID), UnivName(other.UnivName), role(other.role) {}

//prints student info like id and name
string UnivMember::printStud() const {
    string studentInfo = "Student Name: ";
    studentInfo += UnivName.printStud(); // prints the student's full name
    studentInfo += ", ID: " + UnivID.getID();
    return studentInfo;
}

//does the same as printStud but for professors
string UnivMember::printProf() const {
    string professorInfo = "Professor Name: ";
    professorInfo += UnivName.printProf(); // prints the student's full name
    professorInfo += ", ID: " + UnivID.getID();
    return professorInfo;
}