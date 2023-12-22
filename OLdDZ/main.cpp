#include "Header.h"

int main()
{
	vector<Employee> work;
    int todayYear = 2024;

    // First employee
    Employee first;
    first.bornYear = 2002;
    first.education = "Middle";
    first.post = "Manager";
    first.salary = 12000;
    first.secondName = "Petrov";

    // Second employee
    Employee second;
    second.bornYear = 1995;
    second.education = "High";
    second.post = "Engineer";
    second.salary = 15000;
    second.secondName = "Ivanov";

    // Third employee
    Employee third;
    third.bornYear = 1988;
    third.education = "High";
    third.post = "Director";
    third.salary = 25000;
    third.secondName = "Sidorov";

    // Fourth employee
    Employee fourth;
    fourth.bornYear = 1948;
    fourth.education = "Middle";
    fourth.post = "Analyst";
    fourth.salary = 18000;
    fourth.secondName = "Kuznetsov";

    // Fifth employee
    Employee fifth;
    fifth.bornYear = 1963;
    fifth.education = "High";
    fifth.post = "Developer";
    fifth.salary = 20000;
    fifth.secondName = "Smirnov";


    work.push_back(first);
    work.push_back(second);
    work.push_back(third);
    work.push_back(fourth);
    work.push_back(fifth);


}