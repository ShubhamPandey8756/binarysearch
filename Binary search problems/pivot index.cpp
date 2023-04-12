int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int leftsum=0;
        int rightsum=sum;
        for(int i=0;i<nums.size();i++)
        {
           
            leftsum+=nums[i];
             if(leftsum==rightsum)
            {
                return i;
            }
            rightsum-=nums[i];
        }
        return -1;
    }
