#include "node.h"
#include "student.h"

using namespace std;

Node::Node(Student* nStudent) {
    student = nStudent;
    node = NULL;
}

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