#include <iostream>
using namespace std;

// Create node



struct Date{
    int day;
};

struct Student{
    string name;
};


struct Node{
    Date date;
    Student student;

    Node *link;
};
Node *head = NULL;


int main()
{   


    Node *ptr = new Node();

    Student student1;
    student1.name = "Ali";

    ptr-> student = student1; 
    ptr->link=NULL;

    head=ptr;

    cout<<"The student's name is"<<ptr->student.name;

    return 0;
}
