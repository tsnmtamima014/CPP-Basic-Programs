#include <iostream>
using namespace std;
int main() {
    int l, h;
    cin >> l >> h;
    for(int i=l, s, n; i<=h; i++, s=0) {
            for(n=i; n>0; s+=
            (n%10)*(n%10)*(n%10),
            n/=10);
    if(s==i) cout << i << " ";
    }
    return 0;
}
