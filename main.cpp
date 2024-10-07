#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class Node {
    public:
    float value;
    Node *next;
    
    Node(float new_value) {
    value = new_value;
    next = nullptr;
    }
};

void printlist(Node* );
Node* inserttail(Node* head, float new_value);
float average(Node* head);

int main(){

cout << "Which linked list method should we use" << endl;
    cout <<"  [1] New nodes are added at the head of the linked list" << endl;