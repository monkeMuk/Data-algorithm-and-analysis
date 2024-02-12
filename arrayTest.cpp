#include <iostream>
using namespace std;

struct Student {
    string* courses; // Pointer to an array of strings
};

int main() {
    string courseNames[3] = {"maths", "science", "english"};
    Student FEST;

    FEST.courses = courseNames; // Assign the pointer

    cout << "Courses:\n";

    for (int i = 0; i < 3; ++i) {
        cout << "Course " << i + 1 << ": " << FEST.courses[i] << "\n";
    }

    return 0;
}