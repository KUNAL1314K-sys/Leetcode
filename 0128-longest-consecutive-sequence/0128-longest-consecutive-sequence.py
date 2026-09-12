class Solution(object):
    def longestConsecutive(self, nums):
        seen = set(nums)
        maxf = 0
        for num in seen:
            if num-1 not in seen:
                current = num
                maxt = 1
                while current+1 in seen:
                    maxt += 1 
                    current = current + 1
                maxf = max(maxf,maxt)
        return maxf
        