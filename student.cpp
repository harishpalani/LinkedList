#include "student.h"

using namespace std;

// Constructor
Student::Student(int _id) {
    id = _id;
}

int Student::getID() {
    return id;
}