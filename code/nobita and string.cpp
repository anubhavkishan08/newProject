#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
		getline(cin, s);
		 n = s.size();
		    vector<string> v;
		 i = 0;
		while(i<n){
			string s1 = "";
			while(s[i] != ' ' and i<n){
				s1 += s[i];
				i++;
			}
			v.push_back(s1);
			i++;
		}
		for(int j=v.size()-1; j>=1; j--)
			cout<<v[j]<<" ";
		cout<<v[0]<<"\n";
    }
    return 0;
}
