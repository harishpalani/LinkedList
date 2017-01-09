#include "node.h"
#include "student.h"

using namespace std;

// Constructor
Node::Node(Student* _student) {
    student = _student;
    node = NULL;
}

// Deconstructor
Node::~Node() {
    delete student;
    node = NULL;
}

Node* Node::getNext() {
    return node;
}

Student* Node::getStudent() {
    return student;
}

void Node::setNext(Node* current) {
    node = current;
}