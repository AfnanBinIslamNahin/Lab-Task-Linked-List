#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

       Node* head = NULL;

    int dataValues[] = {125,75, 90, 58, 39, 22, 170};

    for (int i = 0; i < 6; ++i) {
        Node* newNode = new Node;

        newNode->data = dataValues[i];

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


    cout << "Linked List Data before insertion:" << endl;

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    Node* newNode = new Node{45, NULL};


   Node* te = head;

    while (te->data != 58) {
        te = te->next;
    }

    newNode->next = te->next;
    te->next = newNode;

    cout << "Linked List Data after insertion:" << endl;

    Node*d = head;

    while ( d != NULL) {
        cout << d->data << " ";
        d = d->next;
    }
    cout << endl;



    return 0;
}
