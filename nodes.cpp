#include <iostream>
using namespace std;


struct Node{
    int data;
    Node *link;
};

Node *head = NULL;

int main()
{   
    Node *ptr = new Node();

    ptr->data=2;
    ptr->link=NULL;

    head=ptr;

    cout<<"data is"<<ptr->data;

    return 0;
}
