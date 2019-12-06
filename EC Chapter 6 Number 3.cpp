// EC Chapter 6 Number 3.cpp : The purpose of this program is to find the highest sales among given inputs using two functions.
//

#include <iostream>
using namespace std;

double NE, NW, SW, SE;
// Asserts
// Input : NE = 100 NW = 200 SW = 300 SE = 500        Output : SE has the most sales
// Input: NE = 100 NW = 100 SW = 90 SE = 80           Output : NE and NW has the most sales
// Input: NE = 0 SW = 0 NW = 0 SE = 0                 Output : Please enter a positive value 

int main()
{
	// Tells user to input sales and calls the getsales function written further down
	cout << "Please enter the sales for the NE Divison." << endl;
	NE = getSales();
	cout << "Please enter the sales for the NW Divison." << endl;
	NW = getSales();
	cout << "Please enter the sales for the SW Divison." << endl;
	SW = getSales();
	cout << "Please enter the sales for the SE." << endl;
	SE = getSales();
	// calls for the findHighest function further down, which calculates which region has the most sales
	findHighest(NE, NW, SW, SE);
	return 0;

}
//function for user input sales
// user inputs sales
// sales have to be greater than 0
// check if sales are greater than 0 using greater than symbol
double getSales()
{
	double sales;
	cout << "What were the sales for this division, for this quarter?" << endl;
	cin >> sales;
	if (sales < 0)
	{
		cout << "Invalid input, please try again.";
		return 0;
	}
	return sales;

}
// use if to find which region has the highest sales
// make statement and see which region is higher
// see which region is higher by making if statements 
// outputs region with most sales
void findHighest(double, double, double, double)
{
		double Highest;

		cout << "The highest grossing division is the ";

		if (NE > SE && NE > NW && NE > SW)
		{
			Highest = NE;
			cout << "Northeast ";
		}
		else if (SE > NE && SE > NW && SE > SW)
		{
			Highest = SE;
			cout << "Southeast ";
		}
		else if (NW > SE && NW > NE && NW > SW)
		{
			Highest = NW;
			cout << "Northwest ";
		}
		else
		{
			Highest = SW;
			cout << "Southwest ";
		}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
