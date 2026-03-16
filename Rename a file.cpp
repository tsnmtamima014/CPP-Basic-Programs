
#include <cstdio>
int main() {
    if (rename("old_name.txt", "new_name.txt") == 0)
        return 0;
}
