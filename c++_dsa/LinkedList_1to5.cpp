#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
    
    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Display the linked list
void display(Node* head) {
    Node* current = head;
    cout << "Linked List: ";
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create nodes for values 1, 2, 3, 4, 5
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    
    // Link the nodes
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    
    // Display the linked list
    display(head);
    
    // Clean up memory
    delete head;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    
    return 0;
}
