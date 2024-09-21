#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
};

void insertAtBegging(Node* head, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

bool detectLoop(Node* head){
    Node*slow = head;
    Node*fast = head;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main(){
    Node* head = new Node();
    head->data =1;
    head->next = NULL;
    Node* second = new Node();
    second->data =2;
    second->next = NULL;
    head->next = second;
    Node* third = new Node();
    third->data = 3;
    third->next = NULL;
    second->next = third;
    Node* fourth = new Node();
    fourth->data = 4;
    fourth->next = NULL;
    third->next = fourth;
    fourth->next = second;
    cout<<detectLoop(head)<<endl;
}