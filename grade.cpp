
/*Write a program that readsastudent's name followed
by five test scores. The program should output the
student's name, the five test scores, and the average
test score. Output the average test score with two
decimal places.

The data to be read is stored inafile called test.txt.
The output should be stored inafile called testavg.txt.
test.txt:Afile containing the student names and the
five test scores for every student.

Andrew Miller 87.50 89 65.75 37 98.50
Green Sheila 91.05 75.88 50.0 65.5 74.30
Sethi Amit 49.82 75 30 74 86.30

testavg.txt:Afile containing the student name, the five
test scores, and the average of the five test scores for
each student.*/


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
//Declare Variables
ifstream inFile;
ofstream outFile;

double test1, test2, test3, test4, test5, test6, test7, test8, test9, 
       test10, test11, test12, test13, test14, test15, test16;
double avg1,avg2,avg3;

string a,b,c,d,e,f;// mark test

//Open the Input File
inFile.open("test.txt");

//Open the Output File
outFile.open("testavg.txt");

//input file validation
    if (!inFile) {

        cout << "File Error !" << endl;
        exit(1);                            //exit from the system when file error to open
    }
outFile << fixed << showpoint;
outFile << setprecision(2);// set the average to two decimal

//Read the input Data
inFile >> a >> b;
inFile >> test1 >> test2 >> test3 >> test4 >> test5;

inFile >> c >> d;
inFile >> test6 >> test7 >> test8 >> test9 >> test10;

inFile >> e >> f;
inFile >> test11 >> test12 >> test13 >> test14 >> test15;

// Calculate average
avg1= (test1 + test2 + test3 + test4+ test5) / 5.0;
avg2= (test6 + test7 + test8 + test9+ test10) / 5.0;
avg3= (test11 + test12 + test13 + test14+ test15) / 5.0;


//Write output
outFile << "Student Name: " << a << " "
<< b << endl;
outFile << "Test Scores: " << setw(6) << test1
<< setw(6) << test2 << setw(6) << test3
<< setw(6) << test4 << setw(6) << test5
<< endl;
outFile << "Average test scores: " << setw(6)
<< avg1 << endl;

outFile << "Student Name: " << c << " "
<< d << endl;
outFile << "Test Scores: " << setw(6) << test6
<< setw(6) << test7 << setw(6) << test8
<< setw(6) << test9 << setw(6) << test10
<< endl;
outFile << "Average test scores: " << setw(6)
<< avg2 << endl;

outFile << "Student Name: " << e << " "
<< f << endl;
outFile << "Test Scores: " << setw(6) << test11
<< setw(6) << test12 << setw(6) << test13
<< setw(6) << test14 << setw(6) << test15
<< endl;
outFile << "Average test scores: " << setw(6)
<< avg3 << endl;

//Close the files
inFile.close();
outFile.close();
}

//Side note: Anyone knows how to use loop?

