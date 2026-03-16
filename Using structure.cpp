#include <iostream>
using namespace std;
struct Student {
    string name;
    int roll;
    float marks;
};
int main() {
    Student s;
    cout << "Enter Name, Roll and Marks: ";
    cin >> s.name >> s.roll >> s.marks;
    cout << "\n--- Student Information ---\n";
    cout << "Name: " << s.name << "\nRoll: " << s.roll << "\nMarks: " << s.marks << endl;

    return 0;
}
