#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    char *arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n<10)
    {
        cout<<arr[n]<<endl;
    }
    else {
    cout<<"Greater than 9";
    }
    

    // Write Your Code Here

    return 0;
}
