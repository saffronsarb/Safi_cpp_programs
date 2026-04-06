#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = nullptr; }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    // Insert at specific position (1-based index)
    void insertAtPosition(int value, int pos) {
        if (pos == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        Node* temp = head;
        for (int i = 1; temp != nullptr && i < pos - 1; i++)
            temp = temp->next;

        if (temp == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete by value
    void deleteByValue(int value) {
        if (head == nullptr) return;

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value)
            temp = temp->next;

        if (temp->next == nullptr) {
            cout << "Value not found!" << endl;
            return;
        }

        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }

    // Delete by position (1-based index)
    void deleteByPosition(int pos) {
        if (head == nullptr) return;

        if (pos == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        for (int i = 1; temp != nullptr && i < pos - 1; i++)
            temp = temp->next;

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }

        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }

    // Search for a value
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) return true;
            temp = temp->next;
        }
        return false;
    }

    // Reverse the linked list
    void reverse() {
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Driver code
int main() {
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtPosition(15, 2);

    cout << "Linked List: ";
    list.display();

    list.deleteByValue(20);
    cout << "After deleting 20: ";
    list.display();

    list.deleteByPosition(2);
    cout << "After deleting position 2: ";
    list.display();

    cout << "Searching for 30: " << (list.search(30) ? "Found" : "Not Found") << endl;

    list.reverse();
    cout << "Reversed List: ";
    list.display();

    return 0;
}