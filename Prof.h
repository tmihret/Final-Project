//Name: Tadael Mihret
#ifndef PROF_H
#define PROF_H
#include "UnivMember.h"
#include <iostream>
using namespace std;

class Prof : public UnivMember //prof class inherited from univmember class
{
    public:
        Prof(const ID& id, const Name& name, const string& role);
        Prof(const Prof& other);
        friend ostream& operator << (ostream& outs, const Prof& prof); //friend overloaded operator

    private:
        UnivMember prof;

};

#endif