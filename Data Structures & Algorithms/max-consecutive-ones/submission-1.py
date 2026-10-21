class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        currentSum = 0
        maxSum = 0

        for num in nums:
            if num == 1:
                currentSum += num

                if(currentSum > maxSum):
                    maxSum = currentSum
            elif num == 0:    
                currentSum = 0

        return maxSum
                
                
        