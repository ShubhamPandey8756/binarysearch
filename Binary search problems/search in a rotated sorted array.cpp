int findPivot(vector<int>& arr, int n)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        //  if(arr[mid]==k)
        //     {
        //         return mid;
        //     }
        if(arr[mid]>=arr[0])
        {
           
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarysearchhelper(vector<int>&arr,int s,int e,int k)
{
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int ans=-1;
    int pivot=findPivot(arr,n);
    if(arr[pivot]<=k&&k<=arr[n-1])
    {
        ans=binarysearchhelper(arr,pivot,n-1,k);
    }
    else
    {
        ans=binarysearchhelper(arr,0,pivot-1,k);
    }
    return ans;
}