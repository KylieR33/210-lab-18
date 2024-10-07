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
    int choice;
    float rate;
    string comment;
    char again;
    Node *head = nullptr;
    vector<string> word;
    
    cout << "Which linked list method should we use" << endl;
    cout <<"  [1] New nodes are added at the head of the linked list" << endl;
    cout <<"  [2] New nodes are added at the tail of the linked list" << endl;
    cout << "  Choice: ";
    cin >> choice;

    if (choice == 2){ 
    do
   {
    cout << "Enter review rating 0-5: ";
    cin >> rate;
    head = inserttail(head, rate);
    cout << "Enter review comments: ";
    cin >> comment;
    word.push_back(comment);
    cout << "Enter another review? Y/N:";
    cin >> again;
    } while (again == 'y');
   }
   else {
       cout << "";
   }

   return 0;
}

Node* inserttail(Node* head, float new_value) {
    Node* new_node = new Node(new_value);
    if (head == nullptr) {
        return new_node;
    }
    Node* last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;
    return head;
}