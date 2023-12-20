#include <bits/stdc++.h>
using namespace std;



struct Node {
    int data;
    Node* next;
};

int main() {
     Node* head = NULL;


    for (int i = 0; i < 5; ++i) {
        Node* newNode = new Node;

        newNode->data = rand() % 100;;

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

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;



    return 0;
}

