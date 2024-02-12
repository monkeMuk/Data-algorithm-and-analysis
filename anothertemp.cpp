#include <iostream>
using namespace std;

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

int main() {
    double phyAverage = 23.0;
    double mathAverage = 65.0;
    double engAverage = 98.0;

    char phyGrade = calculateGrade(phyAverage);
    char mathGrade = calculateGrade(mathAverage);
    char engGrade = calculateGrade(engAverage);

    cout << "Physics Grade: " << phyGrade << endl;
    cout << "Math Grade: " << mathGrade << endl;
    cout << "English Grade: " << engGrade << endl;

    return 0;
}