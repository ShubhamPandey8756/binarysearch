#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size();
        int mid=s+(e-s)/2;
        while(s<e)
        {
           if(arr[mid]<arr[mid+1])
           {
               s=mid+1;
           } 
           else
           {
               e=mid;
           }
            mid=s+(e-s)/2;
        }
         return s;
    }
int main(){
vector<int>ans;
	cout<<"enter size";
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		int d;
		cin>>d;
		ans.push_back(d);
	}
	int ans1=peakIndexInMountainArray(ans);
	cout<<ans1;
	return 0;
}
