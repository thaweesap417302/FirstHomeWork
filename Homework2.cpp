#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, lastname;
    int salary, sales, commission;
    cout << "****HomeWork 2***********\n";
    cout << "Enter Name               : ";
    cin >> name >> lastname;
    cout << "Enter Salary             : ";
    cin >> salary;
    cout << "Enter Sale               : ";
    cin >> sales;
    cout << "Enter Commission Percent : ";
    cin >> commission;
    cout << "Your Name = " << name << " " << lastname << endl;
    cout << "Total Revenue \t" << (sales*commission/100)+salary<< " Bath" << endl;
	
    system("pause");
    return 0;
} 