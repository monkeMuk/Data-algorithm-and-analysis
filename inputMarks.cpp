#include <iostream>
using namespace std;




int main()
{   
    double testMarks;
    double totalMarks;
    double average;


    for(int i=0;i<5;i++)
    {
        cout<<"Marks for test "<<i+1<<":    ";
        cin>>testMarks;
        
        totalMarks+=testMarks;
    }

    average=totalMarks/5;

    cout<<average;

    return 0;
}




