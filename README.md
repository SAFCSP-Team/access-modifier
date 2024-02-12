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
   
5. Call `getSalary()` method and print the id value

6. Assign `id` a value and print it's value

  
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
    /* Add your code here */

};

int main()
{

    Employee employee1;

    employee1.id = 1;
    
    /* Add your code here */

    return 0;
};

```
