//Name: Tadael Mihret
#include "Prof.h"
#include <iostream>
using namespace std;

//constructor for prof that initialzed both univmember and prof objects
Prof::Prof(const ID& id, const Name& name, const string& role) : UnivMember(id, name, role), prof(id, name, role) {
    
}

//copy constructor for prof
Prof::Prof(const Prof& other) : UnivMember(other), prof(other.prof)  {
    
}

//overloaded operator for prof that prints in html format
ostream& operator << (ostream& outs, const Prof& prof)
{
    outs << "<p>"; //html paragraph opening
    outs << prof.printProf(); //prints prof attributes
    outs << "</p>\n"; //html paragraph closing
    return outs;
}
