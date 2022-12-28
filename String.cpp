#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    cout<<a<<" "<<b<<endl;
    return 0;
}
