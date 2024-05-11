//Name: Tadael Mihret
#include "Name.h"
#include <iostream>
using namespace std;

Name::Name()
{
    fname = "First";
    lname = "Last";
}

Name::Name(string &name) //consturctor finds the comma and uses substr to organize the names
{
    int commaIndex = name.find(',');
    if(commaIndex != string::npos) //finds comma to split first and last name
    {
        fname = name.substr(commaIndex + 1);
        lname = name.substr(0, commaIndex);
    }

}

string Name::printProf() const //prints first and last name for profs as a string
{
    string fullName = fname + lname;
    return fullName;
}


string Name::printStud() const //prints first and last name for students as a string
{
    string fullName = fname + " " + lname;
    return fullName;
}
