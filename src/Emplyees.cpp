
#include <iostream>

    using namespace std;

class Employee
{

    /* Add your code here
    1. declatre private salary
    */

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

    /* Add your code here
    2. Declatre setSalary(newSalary){} to access and update salary propetiry
    */
};

int main()
{

    Employee employee1;

    employee1.id = 1;
    employee1.name = "Ahmed";
    employee1.role = "Software developer";
    /* Add your code here
   3. Call setSalary(){} method and pass the new salary in the function parameter to access and update salary propetiry
   */

    employee1.printInfo();

    return 0;
};