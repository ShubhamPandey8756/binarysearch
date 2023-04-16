bool isvalid(vector<int>&ans,int k ,int mid)
{
    int painter=1;
    int partision=0;
    for(int i=0;i<ans.size();i++)
    {
        if(partision+ans[i]<=mid)
        {
            partision+=ans[i];
        }
        else{
            painter++;
            if(painter>k||ans[i]>mid)
            {
                return false;
            }
            partision=ans[i];
        }

    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s=0;
    int sum=0;
    for(int i=0;i<boards.size();i++)
    {
        sum+=boards[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isvalid(boards,k,mid))
        {
           ans=mid;
           e=mid-1;

        }
        else{
           s= mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}