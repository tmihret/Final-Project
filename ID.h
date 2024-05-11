//Name: Tadael Mihret
#ifndef ID_H
#define ID_H

#include <string>
#include <vector>

using namespace std;

class ID
{
    public:
        ID(); //default constructor
            
        void setIDnum(int num); //setter
        int getIDNum() const; //getter
        string getID() const; //getter
        int generateNewID(); //generates id

    private:
        int ID_number;
        string full_ID;
};

#endif
