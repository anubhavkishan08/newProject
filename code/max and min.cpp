#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
vector<int> b;
int i;
vector<int> :: iterator it1,it2;
sort(arr.begin(),arr.end());
for(i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}
/*int i;
for(i=0;i<k;i++)
  {
      b.push_back(arr[i]);
  }
it1=min_element(b.begin(),b.end());
it2=max_element(b.begin(),b.end());

 return(*it2-*it1);
 */
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
