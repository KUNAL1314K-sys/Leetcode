class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        i = 0
        for k in range(len(nums)):
            if nums[k] != val:
                nums[i] = nums[k]
                i += 1
        return i
            