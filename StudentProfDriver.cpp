//Name: Tadael Mihret
#include "Student.h"
#include "Prof.h"
#include <fstream>
#include <vector>

int main()
{
    vector<Student> students; //vector containing the students
    vector<Prof> profs; //vector containing the professors

    ifstream studentFile; //declares input file stream object
    studentFile.open("StudentsLastFirst.txt"); //opens input file that contains the name of the students

    if(!studentFile.is_open()) //checks if prof file is open
    {
        cout << "file is not opened\n";
        exit(0);
    }

    string line;
    int memberID = 0; //makes the memberid start from 0

    while(getline(studentFile, line)) //loop to read in lines from the prof file then assign to the vector
    {
        Name name(line);

        ID idObj;
        Student studs(idObj, name, "Student"); //declares student object with its attributes similar to univmember
        students.push_back(studs); //adds to vector
    }

    studentFile.close(); //closes student input file

    ifstream profFile; //same thing for the professor one
    profFile.open("CSProfNames.txt");

    if(!profFile.is_open()) //checks if prof file is open
    {
        cout << "file is not opened\n";
        exit(0);
    }

    while(getline(profFile, line)) //loop to read in lines from the prof file then assign to the vector
    {
        Name name(line);

        ID idObj;
        idObj.setIDnum(memberID);
        Prof professors(idObj, name, "Prof");
        profs.push_back(professors);
        //cout << "readData: ID_number = " << idObj.getIDNum() << std::endl;
    }

    profFile.close();

    ofstream outputFile; //declares output file stream object
    outputFile.open("index.html"); //opens the html file that will contain the files

    if(outputFile) //if the outputFile is opened
{
	//outputs the info  with the inputted name and description in html syntax to index.html
	outputFile << "<html>" << endl;
	outputFile << "<head>" << endl;
	outputFile << "</head>" << endl;
	outputFile << "<body>" << endl;
    outputFile << "\t<hr/>" << endl;
		outputFile << "\t\t<h1>" << "Fordham Students" << "</h1>" << endl;
		outputFile << "\t<hr/>" << endl;
		outputFile <<"\t"  << endl;
        for(int i = 0; i < students.size(); i++) //for loop for printing the students in the vector
        {
            outputFile << students[i];
        }
		outputFile << "\t<hr/>" << endl;
        outputFile << "\t\t<h2>" << "Fordham Professors" << "</h2>" << endl;
		outputFile << "\t<hr/>" << endl;
		outputFile <<"\t"  << endl;
        for(int i = 0; i < profs.size(); i++) //for loop for printing the professors in the vector
        {
            outputFile << profs[i];
        }
		outputFile << "\t<hr/>" << endl;
	outputFile << "</body>" << endl;
	outputFile << "</html>" << endl;
}



}