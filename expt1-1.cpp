#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{

	cout << fixed << showpoint;

	cout << " " << "Ticket Price:" << " " << "Number of Tickets Sold";
	cout << " " << endl;
	
	double Box;
	cout << " Box $250: " << " " ;
	cin >> Box;
	cout << " " << " Total Box Sales Amount: " << setprecision(2) << Box * 250.00 << endl;
	cout << " " << endl;
	double SideLine;
	cout << " Sideline $100: " << " " ;
	cin >> SideLine;
	cout << " " << " Total Sideline Sales Amount: " << setprecision(2) << SideLine * 100 << endl;
	cout << " " << endl;
	double Premium;
	cout << " Premium $50: " << " " ;
	cin >> Premium;
	cout << " " << " Total Premium Sales Amount: " << setprecision(2) << Premium * 50 << endl;
	cout << " " << endl;
	double GeneralAdmission;
	cout << " General Admission $25: " << " " ;
	cin >> GeneralAdmission;
	cout << " " << " Total General Admission Sales Amount: " << setprecision(2) << GeneralAdmission * 25 << endl;
	cout << " " << endl;
	double TotalSale;
	cout << " " << " Total Sales Amount: " << " " << setprecision(2) << (Box*250.00) + (SideLine*100.00) + (Premium*50.00) + (GeneralAdmission*25.00) << endl;

_getch();
	return 0;
}