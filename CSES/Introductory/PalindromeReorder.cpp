#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    vector<int>cnt(26,0);
    bool mid = false;
    if(s.size()%2==1)mid = true;
    string side = "",cent;
    for(int i=0;i<s.size();i++)cnt[s[i]-'A']++;
    for(int i=0;i<26;i++)
    {
        if(cnt[i]%2!=0)
        {
            if(mid)
            {
                mid = false;
                cent = string(cnt[i],char(65+i));
            }
            else{
                cout<<"NO SOLUTION";
                return 0;
            }
        }
        else {
            string t = string(cnt[i]/2,char(65+i));
            side = side + t;
        }
    }
    string tr = cent + side;
    reverse(side.begin(),side.end());
    cout<<(side + tr);
    return 0;
}
