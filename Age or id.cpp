#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Student {
    string name;
    int age;
    int id;
};
int main() {
    int n = 3;
    Student s[n];
cout << "Enter Name, Age, and ID for " << n << " students:\n";
    for(int i = 0; i < n; i++) cin >> s[i].name >> s[i].age >> s[i].id;
sort(s, s + n, [](Student a, Student b) {
        return a.age < b.age;
    });
cout << "\n--- Sorted by Age ---\n";
    for(int i = 0; i < n; i++)
        cout << "Name: " << s[i].name << " | Age: " << s[i].age << " | ID: " << s[i].id << endl;

    return 0;
}
