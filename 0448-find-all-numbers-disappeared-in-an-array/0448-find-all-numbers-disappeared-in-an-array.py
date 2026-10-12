class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        
        for i in range(len(nums)):
            ind = abs(nums[i]) - 1
            nums[ind] = -abs(nums[ind])
        ans = []
        for i in range(len(nums)):
            if nums[i]>0:
                ans.append(i+1)
        return ans
