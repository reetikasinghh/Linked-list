#include<iostream>
using namespace std;

// Definition of the Node class for a singly linked list
class Node {
public:
    int val;       // Data stored in the node
    Node* next;    // Pointer to the next node
    Node(int data) : val(data), next(NULL) {} // Constructor to initialize a new node
};

// Function to insert a new node at the beginning of the linked list
void insertAtHead(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to delete the node at the head of the linked list
void delAtHead(Node* &head) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Function to delete the node at the end of the linked list
void deleteAtEnd(Node* &head) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = NULL;
    delete temp1;
}

int main() {
    int choice, data;
    Node* head = NULL; // Initialize the linked list with a null head pointer

    while (1) {
        cout << "1. Add node at start" << endl;
        cout << "2. Delete node at start" << endl;
        cout << "3. Add node at end" << endl;
        cout << "4. Delete node at end" << endl;
        cout << "5. Display Linked List" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data for the new node: ";
                cin >> data;
                insertAtHead(head, data);
                break;
            case 2:
                delAtHead(head);
                break;
            case 3:
                cout << "Enter data for the new node: ";
                cin >> data;
                insertAtEnd(head, data);
                break;
            case 4:
                deleteAtEnd(head);
                break;
            case 5:
                display(head);
                break;
            case 6:
                exit(0); // Exit the program gracefully
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
/* output 
1. Add node at start   
2. Delete node at start
3. Add node at end     
4. Delete node at end  
5. Display Linked List 
6. Exit

Enter Your choice : 1  
Enter data for the new node: 2004
1. Add node at start   
2. Delete node at start
3. Add node at end
4. Delete node at end
5. Display Linked List
6. Exit

Enter Your choice : 2
1. Add node at start
2. Delete node at start
3. Add node at end
4. Delete node at end
5. Display Linked List
6. Exit

Enter Your choice : 3
Enter data for the new node: 6369
1. Add node at start
2. Delete node at start
3. Add node at end
4. Delete node at end
5. Display Linked List
6. Exit*/
