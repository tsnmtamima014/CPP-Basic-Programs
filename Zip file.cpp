
#include <iostream>
int main() {
    system("powershell Expand-Archive -Path 'test.zip' -DestinationPath './extracted' -Force");
    std::cout << "File extracted to './extracted' folder." << std::endl;
    return 0;
}
