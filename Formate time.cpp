
#include <iostream>
#include <string>
int main() {
    std::string t = "1_ : 3_";
    if(t[1] == '_') t[1] = '2'; if(t[6] == '_') t[6] = '9';
    std::cout << "Maximized Time: " << t << std::endl;
    return 0;
}
