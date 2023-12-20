#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = NULL;

    int DataValues[] = {125, 75, 90, 58, 39, 22, 170};

    for (int i = 0; i < 7; ++i) {
        Node* newNode = new Node;

        newNode->data = DataValues[i];

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    cout << "Linked List Data before deletion:" << endl;

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
        cout << "Null" << endl;

    cout << endl;



    temp = head;
    Node* prev = NULL;

    while (temp != NULL && temp->data !=170) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {

        if (prev != NULL) {
            prev->next = temp->next;
        } else {

            head = temp->next;
        }
        delete temp;
    }

    cout << "Linked List Data after deletion:" << endl;
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "Null" << endl;




    return 0;
}
