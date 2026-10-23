class Solution:
    def findLHS(self, nums: list[int]) -> int:
        count = Counter(nums)
        maxLength = 0
        for key in count:
            if key+1 in count:
                length = count[key] + count[key+1]
                maxLength = max(maxLength, length)
            
        return maxLength