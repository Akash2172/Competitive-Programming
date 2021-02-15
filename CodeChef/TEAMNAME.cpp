#include<bits/stdc++.h>
#define fob(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		string s[n];map<string,int> m;
		fob(i,n)
		{
			cin>>s[i];
			m[s[i]]++;
		}
		map<string,vector<char>> mm;
		fob(i,n)
		{
			string temp=s[i];
			fob(j,26)
			{
				char z='a'+j;
				string w=temp;
				w[0]=z;
				if(m[w]==0)
				{
					mm[temp].push_back(z);
				}
			}
		} 
		map<char,map<char,int> > mup;
		fob(i,n)
		{
			string x=s[i];
			char z=x[0];
			vector<char> vv=mm[x];
			for(int j=0;j<vv.size();j++)
			{
				char zz=vv[j];
				mup[z][zz]++;
			}
		}  int out=0;
		for(int i=0;i<n;i++)
		{
			string cc=s[i];
			char z=cc[0];
			vector<char> vv=mm[cc];
			for(int j=0;j<vv.size();j++)
			{
				char zz=vv[j];
				out+=mup[zz][z];
			}
		} 
		cout<<out<<'\n';
	}
	return 0;
}
