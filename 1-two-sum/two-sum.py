class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ln = len(nums)
        for i in range(0,ln):
            for j in range(i+1,ln):
                if nums[i]+nums[j]==target:
                    return [i,j]     
        