#include "Student.h"
#include <iostream>
using namespace std;

// Constructor
Student::Student(string name, int id) : name{name}, id{id} { } 

// Implementation of the add grade method
void Student::addGrade(float grade)
{
    grades.push_back(grade);
}

// Define the friend function
// Note: this function is not in the Student class scope.
float averageGrade(const Student& student) 
{
    float total = 0.0;

    // Function has access to the student private grades vector.
    for (float grade : student.grades)
    {
        total += grade;
    }
    return total / student.grades.size();
}

int main()
{
    Student john("John Doe", 123456);
    john.addGrade(85.5);
    john.addGrade(90.2);
    john.addGrade(78.4);
    john.addGrade(88.9);
    
    cout << "Average grade for " << john.getName() << ": " << averageGrade(john) << endl;

    return 0; 
}

