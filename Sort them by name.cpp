#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Student {
    string name;
    int roll;
};
int main() {
    int n = 3;
    Student s[n];
cout << "Enter Name and Roll for " << n << " students:\n";
    for(int i = 0; i < n; i++) cin >> s[i].name >> s[i].roll;
    sort(s, s + n, [](Student a, Student b) {
        return a.name < b.name;
    });

    cout << "\n--- Sorted by Name ---\n";
    for(int i = 0; i < n; i++)
        cout << s[i].name << " (Roll: " << s[i].roll << ")" << endl;

    return 0;
}
