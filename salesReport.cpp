#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    const double STATE_SALES_TAX = .04;
    const double COUNTY_SALES_TAX = .02;

    string month;
    int year;
    double totalC, sales, totalStateTax, totalCountyTax, totalTax;

    cout << fixed << setprecision(2);

    cout << "Enter month:" << endl;
    cin >> month;
    cout << "Enter year:" << endl;
    cin >> year;
    cout << "Enter total amount collected:" << endl;
    cin >> totalC;
    
    sales = totalC / (1 + STATE_SALES_TAX + COUNTY_SALES_TAX);
    totalStateTax = sales * STATE_SALES_TAX;
    totalCountyTax = sales * COUNTY_SALES_TAX;
    totalTax = totalCountyTax + totalStateTax;

    cout << endl << endl;
    cout << "MONTH: " << month << endl << endl;
    cout << "YEAR: " << year << endl << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << left << setw(20) << "Total Collected:" << setw(5) << "$" << right << setw(10) << totalC << endl;
    cout << left << setw(20) << "Sales:" << setw(5) << "$" << right << setw(10) << sales << endl;
    cout << left << setw(20) << "County Sales:" << setw(5) << "$" << right << setw(10) << totalCountyTax << endl;
    cout << left << setw(20) << "State Sales Tax:" << setw(5) << "$" << right << setw(10) << totalStateTax << endl;
    cout << left << setw(20) << "Total Sales Tax:" << setw(5) << "$" << right << setw(10) << totalTax << endl << endl;
    cout << "----------------------------------------------------" << endl << endl;


    return 0;
}