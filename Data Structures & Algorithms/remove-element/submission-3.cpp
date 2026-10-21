class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int nonValsNumber=nums.size();

        //[3,2,2,3] val=3
        //[0,1,2,2,3,0,4,2] val=2

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == val)
            {
                for(int j=i+1; j<nums.size(); j++)
                {
                    if(nums[j] != val)
                    {
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
        }

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nonValsNumber = i;
                break;
            }
        }

        return nonValsNumber;
    }
};