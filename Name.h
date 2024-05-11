//Name: Tadael Mihret
#ifndef NAME_H
#define NAME_H

#include <string>
#include <vector>

using namespace std;

class Name
{
    public:
        Name(string &name); //constructor passing name
        Name(); //default constructor
        string printProf() const; //prints name for prof
        string printStud() const; //prints name for students

    private:
        string fname;
        string lname;
};

#endif