
#include <iostream>

    using namespace std;

class Employee
{

    /* Add your code here */

public:
    int id;
    string name;
    string role;

    void printInfo()
    {

        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
    }

    /* Add your code here */
};

int main()
{

    Employee employee1;

    employee1.id = 1;
    employee1.name = "Ahmed";
    employee1.role = "Software developer";
    /* Add your code here */

    employee1.printInfo();

    return 0;
};
