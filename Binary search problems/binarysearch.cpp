#include<bits/stdc++.h>
using namespace std;
int helper(int arr[],int key,int si,int ei)
{
	int mid;
	mid=(si+ei)/2;
	while(si<=ei)
	{
		
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]>key)
		{
			ei=mid-1;
		}
		else {
			si=mid+1;
		}
		mid=(si+ei)/2;
	}
	return-1;
}
int main()
{
	int key;
	cout<<"enter the value of key";
	cin>>key;
	int monoarray[]={3,4,5,6,7};
	int ans=helper(monoarray,key,0,5);
	cout<<ans;
	return 0;
}

