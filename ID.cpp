//Name: Tadael Mihret
#include "ID.h"
#include <iostream>
using namespace std;

ID::ID() //default constructor
{
    ID_number = generateNewID();
    full_ID = "A" + to_string(ID_number); //attaches a to the idnum
}

int ID::generateNewID() //generates the id nums and increments eachtime called
{
    static int currentNum = 10000000;
    return currentNum++;
}

void ID::setIDnum(int num)  //setter
{
    ID_number = num;
}


int ID::getIDNum() const //getter
{
    return ID_number;
}

string ID::getID() const //getter
{
    return full_ID;
}



