#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    char c;
    float f;
    long l;
    double d;
    cin>>a>>l;
    cin.ignore();
    cin>>c>>f>>d;
    cout<<a<<endl<<l<<endl<<c<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl<<fixed<<setprecision(9)
    <<d<<endl;

    return 0;
}
