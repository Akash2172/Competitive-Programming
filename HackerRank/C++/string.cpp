#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int c=a.size();
    int d=b.size();
    cout<<c<<" "<<d<<endl;    
    string e=a+b;
    cout<<e<<endl;
    char f=a[0];
    char g=b[0];
    char temp=a[0];    
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
	// Complete the program
  
    return 0;
}
