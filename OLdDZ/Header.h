#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Employee
{
	string secondName;
	int bornYear;
	string post;
	int salary;
	string education;

    void show()
    {
        cout << endl;
        cout << "Second name: " << secondName << endl;
        cout << "Born year: " << bornYear << endl;
        cout << "Post: " << post << endl;
        cout << "Salary: " << salary << endl;
        cout << "Education: " << education << endl;
        cout << endl;
    }
};
