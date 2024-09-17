#include <iostream>
using namespace std;
double expenses(double, double, double, double, double);

int main()
{
	double milesDriven;
	double costPerGallon;
	double milesPerGallon;
	double parkingFees;
	double tolls;

	cout << "Enter your total miles driven per trip ===> ";
	cin >> milesDriven;
	cout << "Enter your total cost per gallon of gasoline ===> " ;
	cin >> costPerGallon;
	cout<<"Enter your total miles per gallon ===> " ;
	cin >> milesPerGallon;
	cout << "Enter the parking fees per trip ===> " ;
	cin >> parkingFees;
	cout << "Enter tolls per trip ===> " ;
	cin >> tolls;
	
	double totalExpense = expenses(milesDriven, costPerGallon, milesPerGallon, parkingFees, tolls);
	cout << "Your total trip expense is ===> $" << totalExpense << endl;
}
double expenses(double milesDriven, double costPerGallon, double  milesPerGallon, double parkingFees, double tolls)
{
	double fuel = (milesDriven / milesPerGallon) * costPerGallon;
	double totalExpense = fuel + parkingFees + tolls;
	return totalExpense;
}