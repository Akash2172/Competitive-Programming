#include <sstream>
#include <vector>
#include <iostream>
using namespace std;



int main() {
    string str;
    cin >> str;
    stringstream ss(str);
    char ch;
    int d=str.size();
    int a;
    int arr[d];
    for(int i=0;i<d;i++)
    {
        ss>>a>>ch;
        arr[i]=a;        
    }
    for(int i=0;i<d;i++)
    {
        if(arr[i+1]==arr[i])
        {
            cout<<arr[i]<<endl;
            break;
        }
        cout<<arr[i]<<endl;
    }
    
    
    
    return 0;
}
