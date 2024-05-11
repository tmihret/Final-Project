Summary of the program:
	I made two new classes, student and professor, that inherit from the University member class and they use operator overloading to output their components like name and ID from reading from the student and professor files to output to an HTML file that can be seen online.

Instructions:
	Download the program, and to run the program, do this on the linux terminal :
g++ ID.cpp Name.cpp UnivMember.cpp Student.cpp Prof.cpp StudentProfDriver.cpp -o StudentProfDriver

Then after do: ./StudentProfDriver

This creates the index.html file that displays the organized components of student and professor files in an html format that can be made public by inputting:
cp index.html/home/students/<your storm id>/public_html/ 
In the terminal, I did mine and the link is https://storm.cis.fordham.edu/~tmihret/ 


Points:
Extended Student and Professor to:

+1 Friend Overload <<
// demonstrated by outputting to an html file that can be displayed online

+1 Inherit from University Member

+1 Copied files to github, under ID tmihret and shared

+1 I/O parsing for the student and professor classes that is displayed into the html file and also reads the student and professor files 

+2 New Application functionality by being able to display student and prof information to an html file that can be shown online

