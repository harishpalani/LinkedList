#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    
    public:
        Student(int);
        int getId();
        
    protected:
        int id;
    
};

#endif