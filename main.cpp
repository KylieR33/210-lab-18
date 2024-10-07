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
