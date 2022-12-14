/*
2.	The distance a vehicle travel can be calculated as follows:
    Distance = speed * time
    For example, if a train travel 40 miles per hour for 3 hours, 
    the distance traveled is 120 miles.
    Write a program that asks the user for the speed of a vehicle 
    (in miles per hour) and how many hours it has traveled. 
    It should then use a loop to display the total distance traveled 
    at the end of each hour of that time period. Here is an example of 
    the output:
*/



// include all needed Library


#include <iostream>
using namespace std;


int main()
{
  
cout << " Enter the speed of the vehicle in mph\n";

double speed;  

cin>>speed;
	
	while(speed < 0)
	{
	    cout << " Please enter a positive number to represent speed in mph\n";

	    cin >> speed;
	}
	
	cout << " Enter number of hours it has traveled\n";

	int hrs;

	cin>>hrs;
	
	while(hrs < 1)
	{
	    cout << "Enter hours greater or equal to 1\n";

	    cin  >> hrs;
	
	}
	
	double distance = hrs*speed;
	
	cout<<"Total distance travelled "<< distance <<endl;
	
    cout<<"Hour by hour distance covered \n";
	
	for(int i=1;i<=hrs;i++)
	{
	    cout<<speed*i<<endl;
	}
  // write your code here.
}