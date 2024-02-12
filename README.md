# Access modifier


### Objective

In this project, our main goal is to understand how to build a class with specified access modifiers and how to access private properties using methods.

### Problem

Build employees class, with the mentioned private property and method below

### Implementation

- In the `Employee` class:

1. Declare private salary property

2. Create `setSalary()` method to access and update salary property

3. Create `getSalary()` method to get and return salary property data



- In the `main` function:

4. Call `setSalary()` method and pass the new salary in the function parameter to access and update the salary property   
   
5. Call `getSalary()` method and print its value

   
The output of this project should be as follows:
   
```
ID: 1
Name: Ahmed
Role: Software developer
Salary: 10000

```
  
  
```cpp


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

    /* Add your code here
    2. Declare setSalary(newSalary){} to access and update salary property
    */
};

int main()
{

    Employee employee1;

    employee1.id = 1;
    employee1.name = "Ahmed";
    employee1.role = "Software developer";
    /* Add your code here
   3. Call setSalary(){} method and pass the new salary in the function parameter to access and update the salary property
   */

    employee1.printInfo();

    return 0;
};


```
