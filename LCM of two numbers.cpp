#include <iostream>
using namespace std;
int main() {
    int a,b,m;
    cin>>a>>b;
    for(m=a>b?a:b; m%(a*b)==0 || m%a || m%b;
    m++);
    cout<<m;
    return 0;
}
