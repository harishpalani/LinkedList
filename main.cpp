#include "node.h"
#include "student.h"

using namespace std;

/*
 * LINKEDLIST
 *
 * Variables required: Student*, Node*
 * Functions required:
 *  Node* getNext() //get next Node pointer (10 points)
 *  Student* getStudent() //get student pointer (10 points)
 *  void setNext(Node*) //set the next pointer to the corresponding node pointer (10 points)
 *  Node(Student*) //constructor (10 points)
 *  ~Node() //deconstructor (10 points)
 * 
 * @author Harish Palani
 * @version 1.0
 */
 
int main() {
    
    Student* student1 = new Student(42);
    Student* student2 = new Student(96);

    Node* node1 = new Node(student1);
    Node* node2 = new Node(student2);
    
    node1 -> setNext(node2);
    
    cout << node1 -> getNext() -> getStudent() -> getID() << endl;
    
    return 0;
    
}