#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    int l=s.size();
    for(int j=0;j<l/2;j++)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
            }
        }
    }
    if(s=="")s="Empty String";
    return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
