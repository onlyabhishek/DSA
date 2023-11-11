int low=0;
        int medium=0;
        int high=nums.size()-1;
        while(medium<=high)
        {
            if(nums[medium]==0)
            {
                swap(nums[medium],nums[low]);
                low++;
                medium++;
            }
            else if(nums[medium]==1)
            {
                
                
                medium++;
            }
            else if(nums[medium]==2)
            {
                swap(nums[medium],nums[high]);
                high--;
                

            }
        }
        
        }