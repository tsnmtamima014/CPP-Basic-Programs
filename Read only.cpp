
#include <sys/stat.h>
#include <io.h>
int main() {
    _chmod("myfile.txt", _S_IREAD);
    return 0;
}
