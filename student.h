#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    
    public:
        Student(int);
        int getID();
        
    protected:
        int id;
    
};

#endif