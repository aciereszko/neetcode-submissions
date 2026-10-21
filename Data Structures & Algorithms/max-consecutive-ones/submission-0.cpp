class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int currentRun = 0, longestRun=0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
            {
                currentRun++;

                if(currentRun > longestRun )
                {
                    longestRun = currentRun;
                }
            }
            else
            {
                currentRun = 0;
            }
        }

        return longestRun;
        
    }
};