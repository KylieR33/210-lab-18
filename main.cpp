#include <iostream>
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
    int count = 0;
    int total = 0;
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
   
   cout << endl;
   cout << "Outputting all reviews: " << endl;
   printlist(head);
   for (int i = 0; i < word.size(); i++){
       int count = 1;
        cout <<"Comments #" <<count++ << ": " << word[i] << endl;
   }
   cout << "Average: " << average(head) << endl;

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
void printlist(Node * hd){
    int count = 1;
    Node * current = hd;
    while (current != nullptr) {
        cout << "Review #" << count++ << ": " <<  current->value << endl;
        current = current->next;
    
    }
}
float average(Node* head){
    float sum = 0;
    int add = 0;
    float average = 0.0;
    Node* current = head;
    while (current != NULL) {
        add++;
        sum += current->value;
        current = current->next;
    }
    average = (double)sum / add;
    return average;
}