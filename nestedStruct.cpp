#include <iostream>

using namespace std;



struct Date{
    int day;
    int month;
    int year;
};

struct Person{
    string name;
    Date dob;
};

int main()
{
    Person person1;
    
    person1.name="Obama";
    person1.dob.day=12;
    person1.dob.month=5;
    person1.dob.year=2003;
    
    
    cout<<person1.name<<"'s bday is on "<<person1.dob.day<<"/"<<person1.dob.month<<"/"<<person1.dob.year;

    return 0;
}

