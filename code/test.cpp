#include<bits/stdc++.h>
using namespace std;

void merges(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums1[k++]=nums1[i++];
            }
            else
            {
                    nums1[k++]=nums2[j++];
            }
        }
        while(i<m)
        {
            nums1[k++]=nums1[i++];
        }
        while(j<n)
        {
           nums1[k++]=nums2[j++];

        }
        for(auto it: nums1)
            cout<<it<<" ";
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> num1(m);
    vector<int> num2(n);
    for(int i=0;i<m;i++)
        cin>>num1[i];
    for(int i=0;i<n;i++)
        cin>>num2[i];

    merges(num1,m,num2,n);
}
