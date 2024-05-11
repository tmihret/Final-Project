//Name: Tadael Mihret
#ifndef STUDENT_H
#define STUDENT_H
#include "UnivMember.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student : public UnivMember //student class that inherits from univmember
{
    public:
        Student(const ID& id, const Name& name, const string& role);
        Student(const Student& other);
        friend ostream& operator << (ostream& outs, const Student& Student); //friend overloaded operator

    private:
        UnivMember Stud;

};

#endif