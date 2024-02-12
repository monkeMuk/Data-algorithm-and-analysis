#include <iostream>
using namespace std;



struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    string name;
    string matricNum;
    Date regDate;
    Date dob;
    string* department;
    double mathMarks;
    double engMarks;
    double phyMarks;
    char mathGrades;
    char engGrades;
    char phyGrades;
};

// to convert average marks to grades
char calculateGrade(double average) {
    if (average >= 80) {
        return 'A';
    } else if (average >= 60) {
        return 'B';
    } else if (average >= 40) {
        return 'C';
    } else {
        return 'F';
    }
}



// Create node
struct Node{
    Student student;
    Date date;

    Node *link;
};

Node *head = NULL;


int main()
{   

    

    Node *ptr = new Node();

    Student student1;

    //name + matric num
    cout<<"Enter student name:  ";
    cin>>student1.name;
    cout<<"Enter student matric number:  ";
    cin>>student1.matricNum;
    
    
    //dates
    cout<<"insert date of registration(DD MM YY): ";
    cin>>student1.regDate.day>>student1.regDate.month>>student1.regDate.year;
    cout<<"insert birtdate(DD MM YY): ";
    cin>>student1.dob.day>>student1.dob.month>>student1.dob.year;

    // array for courses
    string courses[3]={"maths","science","englsih"};
    student1.department=courses;


    // Assigning marks 
    cout<<"\n\nAssign the marks for the following tests:"<<endl;
    
    double testMarks;
    double totalMarks;
    double average;

    //Maths
    totalMarks = 0; 
    for(int i=0;i<5;i++)
    {
        cout<<"Marks for maths test number "<<i+1<<":    ";
        cin>>testMarks;
        totalMarks+=testMarks;
    }
    average=totalMarks/5;
    student1.mathMarks=average;
    char mathGrade = calculateGrade(average);
    student1.mathGrades=mathGrade;


    //Physics
    totalMarks = 0; 
    for(int i=0;i<5;i++)
    {
        cout<<"Marks for physics test number "<<i+1<<":    ";
        cin>>testMarks;
        totalMarks+=testMarks;
    }
    average=totalMarks/5;
    student1.phyMarks=average;
    char phyGrade = calculateGrade(average);
    student1.phyGrades=phyGrade;

    //English
    totalMarks = 0; 
    for(int i=0;i<5;i++)
    {
        cout<<"Marks for english test number "<<i+1<<":    ";
        cin>>testMarks;
        totalMarks+=testMarks;
    }
    average=totalMarks/5;
    student1.engMarks=average;
    char engGrade = calculateGrade(average);
    student1.engGrades=engGrade;


    ptr-> student = student1; 
    ptr->link=NULL;

    Node *head=ptr;



    cout<<"\n\n-----------Student Registration Slip-----------------"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"\tName:\t\t\t"<<ptr->student.name<<endl;
    cout<<"\tMatric Number:\t\t"<<ptr->student.matricNum<<endl<<endl;
    cout<<"\tRegistration Date:\t"<<ptr->student.regDate.day<<"/"<<ptr->student.regDate.month<<"/"<<ptr->student.regDate.year<<endl;
    cout<<"\tDate of birth:\t\t"<<ptr->student.dob.day<<"/"<<ptr->student.dob.month<<"/"<<ptr->student.dob.year<<endl<<endl;
    cout<<"\tAverage math marks: \t"<<ptr->student.mathMarks<<endl;
    cout<<"\tmath grade: \t\t"<<ptr->student.mathGrades<<endl;
    cout<<"\tAverage physics marks:  "<<ptr->student.phyMarks<<endl;
    cout<<"\tphysics grade: \t\t"<<ptr->student.phyGrades<<endl;
    cout<<"\tAverage english marks:  "<<ptr->student.engMarks<<endl;
    cout<<"\tenglish grade: \t\t"<<ptr->student.engGrades<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    


    return 0;
}
