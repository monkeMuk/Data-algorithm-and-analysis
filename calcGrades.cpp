#include <iostream>
using namespace std;




int main()
{   
    int phyMarks = 23;
    int mathMarks = 65;
    int engMarks = 98;

    //double average = 46;
    char grades = 'u';

    if(average >= 80){
        grades='A';
    }else if (average >= 60){
        grades='B';
    }else if (average >= 40){
        grades='C';
    }else{
        grades='F';
    }

    cout<<grades;

    return 0;
}
