/*
 1.	An online book club awards points to its customers based 
    on the number of books purchased each month. 
    See the pdf for the poinst earned

    Write a program that asks the user to enter the number of 
    books purchased this month and then displays the number of 
    points awarded.
*/



// include all needed Library
#include <iostream>


using namespace std;


int main()
{
// write your code here.
   string input = "";

// How to get a number.
int numofbooks = 0;
int numofpoints = 0;

while (true) 
{
cout << "Please enter the number of books purchased (a valid number) : ";

cin >> numofbooks;

if (numofbooks > -1)

break;

cout << "Invalid number, please try again" << endl;

}

cout << "You entered: " << numofbooks << endl;

if(numofbooks == 0) {

numofpoints = 0;

} else if(numofbooks == 1) {

numofpoints = 5;

} else if(numofbooks == 2) {

numofpoints = 15;

} else if(numofbooks == 3) {

numofpoints = 30;

} else if(numofbooks >= 4) {

numofpoints = 50;

}
cout << "Number of points awarded : " << numofpoints << endl;

return 0;

}
 
