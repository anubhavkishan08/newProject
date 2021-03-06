#include <bits/stdc++.h>
using namespace std;
int getPairsCount(vector<int> arr, int n, int sum)
{
    int count = 0;
    map<set<int>, int> mp;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum) {
            	set<int> s;
            	s.insert(arr[i]);
            	s.insert(arr[j]);
            	if(!mp[s]) {
            		count++;
            	}
            	mp[s]++;
            }

    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, a;
    string s;
    cin >> t;
    vector<int> arr;
    map<int, string> mp;
    mp.insert({0, "zero"});
    mp.insert({1, "one"});
    mp.insert({2, "two"});
    mp.insert({3, "three"});
    mp.insert({4, "four"});
    mp.insert({5, "five"});
    mp.insert({6, "six"});
    mp.insert({7, "seven"});
    mp.insert({8, "eight"});
    mp.insert({9, "nine"});
    mp.insert({10, "ten"});
    mp.insert({11, "eleven"});
    mp.insert({12, "twelve"});
    mp.insert({13, "thirteen"});
    mp.insert({14, "fourteen"});
    mp.insert({15, "fifteen"});
    mp.insert({16, "sixteen"});
    mp.insert({17, "seventeen"});
    mp.insert({18, "eighteen"});
    mp.insert({19, "nineteen"});
    mp.insert({20, "twenty"});
    mp.insert({21, "twenty one"});
    mp.insert({22, "twenty two"});
    mp.insert({23, "twenty three"});
    mp.insert({24, "twenty four"});
    mp.insert({25, "twenty five"});
    mp.insert({26, "twenty six"});
    mp.insert({27, "twenty seven"});
    mp.insert({28, "twenty eight"});
    mp.insert({29, "twenty nine"});
    mp.insert({30, "thirty"});
    mp.insert({31, "thirty one"});
    mp.insert({32, "thirty two"});
    mp.insert({33, "thirty three"});
    mp.insert({34, "thirty four"});
    mp.insert({35, "thirty five"});
    mp.insert({36, "thirty six"});
    mp.insert({37, "thirty eight"});
    mp.insert({39, "thirty nine"});
    mp.insert({40, "forty"});
    mp.insert({41, "forty one"});
    mp.insert({42, "forty two"});
    mp.insert({43, "forty three"});
    mp.insert({44, "forty four"});
    mp.insert({45, "forty five"});
    mp.insert({46, "four six"});
    mp.insert({47, "four seven"});
    mp.insert({48, "four eight"});
    mp.insert({49, "four nine"});
    mp.insert({50, "fife zero"});
    mp.insert({51, "fifty one"});
    mp.insert({52, "fifty two"});
    mp.insert({53, "fifty three"});
    mp.insert({54, "fifty four"});
    mp.insert({55, "fifty five"});
    mp.insert({56, "fifty six"});
    mp.insert({57, "fifty seven"});
    mp.insert({58, "fifty eight"});
    mp.insert({59, "fifty nine"});
    mp.insert({60, "six zero"});
    mp.insert({61, "six one"});
    mp.insert({62, "six two"});
    mp.insert({63, "six three"});
    mp.insert({64, "six four"});
    mp.insert({65, "six five"});
    mp.insert({66, "six six"});
    mp.insert({67, "six seven"});
    mp.insert({68, "six eight"});
    mp.insert({69, "six nine"});
    mp.insert({70, "seven zero"});
    mp.insert({71, "seven one"});
    mp.insert({72, "seven two"});
    mp.insert({73, "seven three"});
    mp.insert({74, "seven four"});
    mp.insert({75, "seven five"});
    mp.insert({76, "seven six"});
    mp.insert({77, "seven seven"});
    mp.insert({78, "seven eight"});
    mp.insert({79, "seven nine"});
    mp.insert({80, "eight zero"});
    mp.insert({81, "eight one"});
    mp.insert({82, "eight two"});
    mp.insert({83, "eight three"});
    mp.insert({84, "eight four"});
    mp.insert({85, "eight five"});
    mp.insert({86, "eight six"});
    mp.insert({87, "eight seven"});
    mp.insert({88, "eight eight"});
    mp.insert({89, "eight nine"});
    mp.insert({90, "nine zero"});
    mp.insert({91, "nine one"});
    mp.insert({92, "nine two"});
    mp.insert({93, "nine three"});
    mp.insert({94, "nine four"});
    mp.insert({95, "nine five"});
    mp.insert({96, "nine six"});
    mp.insert({97, "nine seven"});
    mp.insert({98, "nine eight"});
    mp.insert({99, "nine nine"});
    mp.insert({100, "hundred"});

    for (i = 0; i < t; i++)
    {
        cin >> a;
        arr.push_back(a);
        s += mp[arr[i]];
    }

    int c = 0, n;
    n = s.size();
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
            c++;
    }
   // cout << c << endl;
    if (c > 100)
    {
        cout << "greater 100." << endl;
    }
    else
    {
        int d = getPairsCount(arr, arr.size(), c);
        cout << mp[d] << endl;
    }
    return 0;
}
