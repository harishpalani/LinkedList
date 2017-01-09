#include "node.h"
#include "student.h"

using namespace std;

int main() {
    
    Student* start = new Student(42);
    Student* end = new Student(96);

    Node* first = new Node(start);
    Node* second = new Node(end);
  
    first -> setNext(second);
    cout << first -> getNext() -> getStudent() -> getId() << endl;
    
    return 0;
    
}