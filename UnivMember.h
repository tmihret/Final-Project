//Name: Tadael Mihret
#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H
#include "Name.h"
#include "ID.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class UnivMember
{
    public:
        UnivMember();
        UnivMember(const ID& id, const Name& name, const string& role);
        UnivMember(const UnivMember& other);
        string printStud() const;
        string printProf() const;
        string getRole() {return role;};

    private:
        Name UnivName;
        ID UnivID;
        string role;
};

#endif
