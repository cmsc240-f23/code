#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student
{
public:
    Student(std::string name, int id);  // constructor
    
    void addGrade(float grade);           
    std::string getName() { return name; }  

    // Declare the averageGrade function as a friend
    friend float averageGrade(const Student& student); 

private:
    std::string name;
    int id;
    std::vector<float> grades;
};

#endif