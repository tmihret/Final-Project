//Name: Tadael Mihret
#include "Student.h"
#include <iostream>
using namespace std;

//constructor for student that initialized univmember and student objects
Student::Student(const ID& id, const Name& name, const string& role) : UnivMember(id, name, role), Stud(id, name, role) {}

//copy constructor for student
Student::Student(const Student& other) : UnivMember(other) ,Stud(other.Stud) 
{
    
}

//overloaded operator to output student attributes in html format
ostream& operator << (ostream& outs, const Student& student)
{
    outs << "<p>";
    outs << student.printStud();
    outs << "</p>\n";
    return outs;
}